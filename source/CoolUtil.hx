package;

import flixel.input.keyboard.FlxKey;
import lime.ui.KeyModifier;
import lime.ui.KeyCode;
import lime.utils.Assets;

using StringTools;

class CoolUtil
{
	public static var difficultyArray:Array<String> = ['EASY', "NORMAL", "HARD"];

	public static function difficultyString():String
	{
		return difficultyArray[PlayState.storyDifficulty];
	}

	public static function coolTextFile(path:String):Array<String>
	{
		var daList:Array<String> = Assets.getText(path).trim().split('\n');

		for (i in 0...daList.length)
		{
			daList[i] = daList[i].trim();
		}

		return daList;
	}

	public static function numberArray(max:Int, ?min = 0):Array<Int>
	{
		var dumbArray:Array<Int> = [];
		for (i in min...max)
		{
			dumbArray.push(i);
		}
		return dumbArray;
	}

	public static function fromKeyCodeToFlxKey(key:KeyCode, poop:KeyModifier) //Translate shit
    {
        var daKey:FlxKey = FlxKey.NONE;

        switch (key)
        {
            case UNKNOWN: daKey = FlxKey.NONE;
            case A: daKey = FlxKey.A;
            case B: daKey = FlxKey.B;
            case C: daKey = FlxKey.C;
            case D: daKey = FlxKey.D;
            case E: daKey = FlxKey.E;
            case F: daKey = FlxKey.F;
            case G: daKey = FlxKey.G;
            case H: daKey = FlxKey.H;
            case I: daKey = FlxKey.I;
            case J: daKey = FlxKey.J;
            case K: daKey = FlxKey.K;
            case L: daKey = FlxKey.L;
            case M: daKey = FlxKey.M;
            case N: daKey = FlxKey.N;
            case O: daKey = FlxKey.O;
            case P: daKey = FlxKey.P;
            case Q: daKey = FlxKey.Q;
            case R: daKey = FlxKey.R;
            case S: daKey = FlxKey.S;
            case T: daKey = FlxKey.T;
            case U: daKey = FlxKey.U;
            case V: daKey = FlxKey.V;
            case W: daKey = FlxKey.W;
            case X: daKey = FlxKey.X;
            case Y: daKey = FlxKey.Y;
            case Z: daKey = FlxKey.Z;
            case NUMBER_0: daKey = FlxKey.ZERO;
            case NUMBER_1: daKey = FlxKey.ONE;
            case NUMBER_2: daKey = FlxKey.TWO;
            case NUMBER_3: daKey = FlxKey.THREE;
            case NUMBER_4: daKey = FlxKey.FOUR;
            case NUMBER_5: daKey = FlxKey.FIVE;
            case NUMBER_6: daKey = FlxKey.SIX;
            case NUMBER_7: daKey = FlxKey.SEVEN;
            case NUMBER_8: daKey = FlxKey.EIGHT;
            case NUMBER_9: daKey = FlxKey.NINE;
            case PAGE_UP: daKey = FlxKey.PAGEUP;
            case PAGE_DOWN: daKey = FlxKey.PAGEDOWN;
            case HOME: daKey = FlxKey.HOME;
            case END: daKey = FlxKey.END;
            case INSERT: daKey = FlxKey.INSERT;
            case ESCAPE: daKey = FlxKey.ESCAPE;
            case MINUS: daKey = FlxKey.MINUS;
            case PLUS: daKey = FlxKey.PLUS;
            case DELETE: daKey = FlxKey.DELETE;
            case BACKSPACE: daKey = FlxKey.BACKSPACE;
            case LEFT_BRACKET: daKey = FlxKey.LBRACKET;
            case RIGHT_BRACKET: daKey = FlxKey.RBRACKET;
            case BACKSLASH: daKey = FlxKey.BACKSLASH;
            case CAPS_LOCK: daKey = FlxKey.CAPSLOCK;
            case SEMICOLON: daKey = FlxKey.SEMICOLON;
            case QUOTE: daKey = FlxKey.QUOTE;
            case RETURN: daKey = FlxKey.ENTER;
            case COMMA: daKey = FlxKey.COMMA;
            case PERIOD: daKey = FlxKey.PERIOD;
            case SLASH: daKey = FlxKey.SLASH;
            case GRAVE: daKey = FlxKey.GRAVEACCENT;
            case SPACE: daKey = FlxKey.SPACE;
            case UP: daKey = FlxKey.UP;
            case DOWN: daKey = FlxKey.DOWN;
            case LEFT: daKey = FlxKey.LEFT;
            case RIGHT: daKey = FlxKey.RIGHT;
            case TAB: daKey = FlxKey.TAB;
            case PRINT_SCREEN: daKey = FlxKey.PRINTSCREEN;
            case F1: daKey = FlxKey.F1;
            case F2: daKey = FlxKey.F2;
            case F3: daKey = FlxKey.F3;
            case F4: daKey = FlxKey.F4;
            case F5: daKey = FlxKey.F5;
            case F6: daKey = FlxKey.F6;
            case F7: daKey = FlxKey.F7;
            case F8: daKey = FlxKey.F8;
            case F9: daKey = FlxKey.F9;
            case F10: daKey = FlxKey.F10;
            case F11: daKey = FlxKey.F11;
            case F12: daKey = FlxKey.F12;
            case NUMPAD_0: daKey = FlxKey.NUMPADZERO;
            case NUMPAD_1: daKey = FlxKey.NUMPADONE;
            case NUMPAD_2: daKey = FlxKey.NUMPADTWO;
            case NUMPAD_3: daKey = FlxKey.NUMPADTHREE;
            case NUMPAD_4: daKey = FlxKey.NUMPADFOUR;
            case NUMPAD_5: daKey = FlxKey.NUMPADFIVE;
            case NUMPAD_6: daKey = FlxKey.NUMPADSIX;
            case NUMPAD_7: daKey = FlxKey.NUMPADSEVEN;
            case NUMPAD_8: daKey = FlxKey.NUMPADEIGHT;
            case NUMPAD_9: daKey = FlxKey.NUMPADNINE;
            case NUMPAD_MINUS: daKey = FlxKey.NUMPADMINUS;
            case NUMPAD_PLUS: daKey = FlxKey.NUMPADPLUS;
            case NUMPAD_PERIOD: daKey = FlxKey.NUMPADPERIOD;
            case NUMPAD_MULTIPLY: daKey = FlxKey.NUMPADMULTIPLY;
            default: daKey = fromKeyModifierToFlxKey(poop);
        }

        return daKey;
    }

    static function fromKeyModifierToFlxKey(poop:KeyModifier):FlxKey
    {
        if (poop.shiftKey) return FlxKey.SHIFT;
        if (poop.ctrlKey) return FlxKey.CONTROL;
        if (poop.altKey) return FlxKey.ALT;

        return FlxKey.NONE;
    }

    public static function nullFloatToFloat(float:Null<Float>):Float
    {
        return Std.parseFloat(Std.string(float));
    }
}
