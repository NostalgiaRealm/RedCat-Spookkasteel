/*
 * FUN_00443298 at 00443298
 * undefined __register FUN_00443298(int param_1)
 * Address ranges: 00443298-00443307
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x43fcd8 slot 16 for TMenuItem. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x43fcd8 slot 16 for
   TMenuItem. Original bytes unchanged; names and types still inferred. */

void FUN_00443298(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x2d) != '\0') {
    if (((*(short *)(param_1 + 0x82) != 0) && (iVar1 = FUN_00442fd4(param_1), iVar1 != 0)) &&
       (iVar1 = FUN_00442fd4(param_1), *(int *)(iVar1 + 0x30) != *(int *)(param_1 + 0x80))) {
      (**(code **)(param_1 + 0x80))(*(undefined4 *)(param_1 + 0x84),param_1);
      return;
    }
    if (((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (*(int *)(param_1 + 0x38) != 0)) {
      (**(code **)(**(int **)(param_1 + 0x38) + 0x18))();
    }
    else if (*(short *)(param_1 + 0x82) != 0) {
      (**(code **)(param_1 + 0x80))(*(undefined4 *)(param_1 + 0x84),param_1);
    }
  }
  return;
}

