/*
 * FUN_005cf7c0 at 005cf7c0
 * undefined FUN_005cf7c0(void)
 * Address ranges: 005cf7c0-005cf909
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005cf7c0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  iVar3 = iVar1 + 1;
  iVar2 = FUN_005cf410(param_1[0x46],iVar3 * 0x8c);
  if (iVar2 == 0) {
    FUN_005cf220(0x52,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006ac4cc,0x225,&DAT_006b3f70,
                 0);
    return 0;
  }
  param_1[0x46] = iVar2;
  iVar2 = FUN_005d19e0();
  if (iVar2 == 0) {
    FUN_005cf220(0x52,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006ac4cc,0x230,&DAT_006b3f70,
                 0);
    return 0;
  }
  iVar2 = FUN_005e0480();
  if (iVar2 == 0) {
    FUN_005cf220(0x52,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006ac4cc,0x23a,&DAT_006b3f70,
                 0);
    return 0;
  }
  if (param_1[0x45] != 0) {
    FUN_005e0530();
  }
  param_1[0x45] = iVar2;
  *param_1 = iVar3;
  FUN_005cf590(param_1);
  FUN_005cf5f0(param_3);
  param_1[2] = 1;
  *param_4 = iVar1;
  iVar3 = FUN_005d18a0();
  param_1[1] = iVar3;
  return 1;
}

