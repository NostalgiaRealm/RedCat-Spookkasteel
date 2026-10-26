/*
 * FUN_005c1140 at 005c1140
 * undefined FUN_005c1140(void)
 * Address ranges: 005c1140-005c122e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005c1140(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x14) <= param_2) && (param_2 < 8)) &&
     (iVar1 = FUN_005c6a70(), iVar1 != 0)) {
    if ((*(int *)(param_1 + 0x28 + param_2 * 4) == 0) &&
       (iVar1 = FUN_005c3240(param_1,param_2,param_2), iVar1 == 0)) {
      return 0;
    }
    iVar1 = FUN_005c0e50(param_1,param_3,param_2);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x28 + param_2 * 4);
      *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
      if (*(int *)(iVar1 + 0x24) != 0) {
        FUN_005c4b80();
      }
      *(int *)(iVar1 + 0x74) = param_1;
      FUN_005c01c0();
      iVar2 = FUN_005c6ad0();
      if (((iVar2 == 0) && (*(int *)(param_1 + 0x68) != 0)) &&
         (iVar2 = FUN_005c0a50(param_2,param_2,2,0,0), iVar2 == 0)) {
        FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x400,
                     &DAT_006b3f70,0);
        FUN_005c02b0();
        return 0;
      }
      return iVar1;
    }
  }
  return 0;
}

