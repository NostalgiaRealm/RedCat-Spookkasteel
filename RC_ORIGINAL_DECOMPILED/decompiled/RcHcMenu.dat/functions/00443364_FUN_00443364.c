/*
 * FUN_00443364 at 00443364
 * undefined __register FUN_00443364(int param_1, undefined4 param_2)
 * Address ranges: 00443364-0044339c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x43fcd8 slot 14 for TMenuItem. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x43fcd8 slot 14 for
   TMenuItem. Original bytes unchanged; names and types still inferred. */

void FUN_00443364(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1;
  if ((*(int *)(param_1 + 0x58) == 0) &&
     (uVar1 = FUN_0040320c(*(int **)(param_1 + 4),(int)&PTR_FUN_004400d4), (char)uVar1 != '\0')) {
    iVar2 = 0;
  }
  if (*(short *)(param_1 + 0x7a) != 0) {
    (**(code **)(param_1 + 0x78))(*(undefined4 *)(param_1 + 0x7c),param_1,iVar2,param_2);
  }
  return;
}

