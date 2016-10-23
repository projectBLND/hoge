using UnityEditor;
using UnityEngine;
using System.Text.RegularExpressions;
using System.Reflection;

public class UnityKeyRemapEditor : EditorWindow
{
    // UndoをCommand + "→" でできるようにする
    [MenuItem("KeyRemap/Undo %LEFT")]
    static void KeyRemapUndo() { Undo.PerformUndo(); }

    // RedoをCommand + "←" でできるようにする
    [MenuItem("KeyRemap/Redo %RIGHT")]
    static void KeyRemapRedo() { Undo.PerformRedo(); }



    // [MenuItem("KeyRemap/Console #&c")]
    // static void KeyRemapConsole() { CommonExecuteMenuItem("Window/Console"); }

    static void CommonExecuteMenuItem(string iStr)
    {
        EditorApplication.ExecuteMenuItem(iStr);
    }
}
