/*
 * FUN_005bc770 at 005bc770
 * undefined FUN_005bc770(void)
 * Address ranges: 005bc770-005bc845
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_005bc770(int param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float local_4;
  
  if ((param_2 == 0) || (param_3 == 0.0)) {
    FUN_005cf220(0x13,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x60d,&DAT_006b3f70,
                 0);
    return false;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x33674) + 0x204);
  iVar1 = *(int *)(*(int *)(param_1 + 0x33674) + 0x208);
  if ((iVar2 != -1) && (iVar1 != -1)) {
    FUN_005c9040(&local_4);
    if (((float)iVar2 < param_3) || ((float)iVar1 < local_4)) {
      FUN_005cf220(0x14,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x623,
                   &DAT_006b3f70,0);
      return false;
    }
  }
  iVar2 = FUN_005b8730(param_1,param_2,param_3);
  return iVar2 != 0;
}

