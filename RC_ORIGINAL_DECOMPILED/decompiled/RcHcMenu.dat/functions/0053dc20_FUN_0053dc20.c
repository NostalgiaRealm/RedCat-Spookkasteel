/*
 * FUN_0053dc20 at 0053dc20
 * undefined4 __register FUN_0053dc20(int param_1, undefined4 * param_2)
 * Address ranges: 0053dc20-0053dc6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 29 for TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 29 for
   TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_0053dc20(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined3 uVar2;
  int iVar3;
  byte *pbVar4;
  byte local_2c [36];
  int local_8;
  
  pbVar4 = local_2c;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pbVar4 = *param_2;
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 4;
  }
  local_8 = param_1;
  iVar3 = FUN_00492440(*(int **)(param_1 + 0x1c),local_2c);
  if (((*(byte *)(iVar3 + 0x18) & 0x40) == 0) && ((*(byte *)(iVar3 + 0x19) & 0x10) == 0)) {
    uVar2 = (undefined3)((uint)iVar3 >> 8);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
  }
  return CONCAT31(uVar2,uVar1);
}

