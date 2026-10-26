/*
 * FUN_005d6e50 at 005d6e50
 * undefined FUN_005d6e50(void)
 * Address ranges: 005d6e50-005d6ee7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d6e50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_1;
  uVar2 = FUN_005d5c10(&param_1);
  param_1 = param_1 + -1;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
  if (param_1 == 0) {
    iVar3 = FUN_005c1c20();
    if (iVar3 == 0) {
      FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006ac648,0x155,
                   &DAT_006b3f70,0);
      return 0;
    }
  }
  FUN_005c02b0();
  if (param_1 == 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
    FUN_005d5bc0();
    return 1;
  }
  FUN_005d5c80(uVar2,param_1);
  return 0;
}

