/*
 * FUN_0053fea4 at 0053fea4
 * undefined __register FUN_0053fea4(int * param_1)
 * Address ranges: 0053fea4-0053fee5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53e020 slot 46 for TAppObjGridBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53e020 slot 46 for
   TAppObjGridBox. Original bytes unchanged; names and types still inferred. */

void FUN_0053fea4(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = FUN_0053e228((int *)&LAB_0053dec4,'\x01',param_1);
  param_1[0x82] = (int)piVar2;
  iVar1 = param_1[0x82];
  *(int **)(iVar1 + 0x3ec) = param_1;
  *(undefined4 *)(iVar1 + 1000) = *(undefined4 *)(*param_1 + 0xd0);
  return;
}

