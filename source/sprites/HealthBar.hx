package sprites;

import flixel.math.FlxMath;
import flixel.ui.FlxBar;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;

class HealthBar extends FlxTypedGroup<FlxSprite>
{
    public var iconP1(default, null):HealthIcon;
    public var iconP2(default, null):HealthIcon;

    private var healthBarBG:FlxSprite;
	private var healthBar:FlxBar;
    public var underTxt(default, null):FlxText;

    private var playerColor:FlxColor = 0xFF66FF33;
    private var opponentColor:FlxColor = 0xFFFF0000;

    public var playerDeathPercent:Int = 20;
    public var opponentDeathPercent:Int = 80;

    override public function new(player:String = 'bf', opponent:String = 'dad')
    {
        super();

        healthBarBG = new FlxSprite(0, FlxG.height * (PlayState.currentSession.curOptions.downScroll ? 0.1 : 0.9)).loadGraphic(Paths.image('healthBar'));
		healthBarBG.screenCenter(X);
		healthBarBG.scrollFactor.set();
		add(healthBarBG);

        healthBar = new FlxBar(healthBarBG.x + 4, healthBarBG.y + 4, RIGHT_TO_LEFT, Std.int(healthBarBG.width - 8), Std.int(healthBarBG.height - 8), PlayState.currentSession,
			'health', 0, 2);
		healthBar.scrollFactor.set();
		healthBar.createFilledBar(opponentColor, playerColor);
		add(healthBar);

        underTxt = new FlxText(healthBarBG.x, healthBarBG.y + 30, healthBarBG.width, "", 20);
		underTxt.setFormat(Paths.font("vcr.ttf"), 16, FlxColor.WHITE, RIGHT);
		underTxt.scrollFactor.set();
		add(underTxt);

        iconP1 = new HealthIcon(player, true);
		iconP1.y = healthBar.y - (iconP1.height / 2);
		add(iconP1);

		iconP2 = new HealthIcon(opponent, false);
		iconP2.y = healthBar.y - (iconP2.height / 2);
		add(iconP2);
    }

    override public function update(elapsed:Float)
    {
        super.update(elapsed);

        iconP1.setGraphicSize(Std.int(FlxMath.lerp(150, iconP1.width, 0.50)));
		iconP2.setGraphicSize(Std.int(FlxMath.lerp(150, iconP2.width, 0.50)));

		iconP1.updateHitbox();
		iconP2.updateHitbox();

		var iconOffset:Int = 26;

		iconP1.x = healthBar.x + (healthBar.width * (FlxMath.remapToRange(healthBar.percent, 0, 100, 100, 0) * 0.01) - iconOffset);
		iconP2.x = healthBar.x + (healthBar.width * (FlxMath.remapToRange(healthBar.percent, 0, 100, 100, 0) * 0.01)) - (iconP2.width - iconOffset);

        if (healthBar.percent < playerDeathPercent)
			iconP1.animation.curAnim.curFrame = 1;
		else
			iconP1.animation.curAnim.curFrame = 0;

		if (healthBar.percent > opponentDeathPercent)
			iconP2.animation.curAnim.curFrame = 1;
		else
			iconP2.animation.curAnim.curFrame = 0;
    }

    public function beatHit(beat:Int)
    {
        iconP1.setGraphicSize(Std.int(iconP1.width + 30));
		iconP2.setGraphicSize(Std.int(iconP2.width + 30));

		iconP1.updateHitbox();
		iconP2.updateHitbox();
    }
}