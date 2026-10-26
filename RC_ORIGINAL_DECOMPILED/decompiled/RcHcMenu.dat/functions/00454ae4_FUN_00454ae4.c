/*
 * FUN_00454ae4 at 00454ae4
 * undefined __register FUN_00454ae4(int param_1)
 * Address ranges: 00454ae4-00454b54
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x452bb4 slot 33 for TPaintBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x452bb4 slot 33 for
   TPaintBox. Original bytes unchanged; names and types still inferred. */

void FUN_00454ae4(int param_1)

{
  int *piVar1;
  
  FUN_0041ce68(*(int *)(param_1 + 0x120));
  FUN_0041c318(*(int **)(*(int *)(param_1 + 0x120) + 0x14),*(undefined4 *)(param_1 + 0x60));
  if ((*(byte *)(param_1 + 0x20) & 0x10) != 0) {
    piVar1 = *(int **)(param_1 + 0x120);
    FUN_0041c110((int *)piVar1[4],1);
    FUN_0041c434((int *)piVar1[5],'\x01');
    FUN_0041cb34(piVar1,0,0,*(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x38));
  }
  if (*(short *)(param_1 + 0x12a) != 0) {
    (**(code **)(param_1 + 0x128))(*(undefined4 *)(param_1 + 300),param_1);
  }
  return;
}

