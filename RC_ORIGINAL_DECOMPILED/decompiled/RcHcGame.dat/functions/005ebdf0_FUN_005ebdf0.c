/*
 * FUN_005ebdf0 at 005ebdf0
 * undefined FUN_005ebdf0(void)
 * Address ranges: 005ebdf0-005ebfff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_005ebdf0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = FUN_0060d240(param_1 + 0x2c,&DAT_006a90d0);
  uVar1 = FUN_005e5d20(param_2,s_Compilationtime_006b1238,uVar1);
  uVar1 = FUN_005e5d20(uVar1);
  FUN_005e5d20(uVar1);
  iVar2 = *(int *)(param_1 + 0x28);
  iVar3 = iVar2 % 10;
  iVar5 = (iVar2 % 100) / 10;
  iVar2 = iVar2 / 100;
  FUN_005e5d20(param_2,s_Compiler_version_006b1224,iVar2,&DAT_0069fafc,iVar5,&DAT_0069fafc,iVar3,
               &DAT_006a90d0);
  uVar1 = FUN_005e7140(iVar2);
  FUN_005e5d20(uVar1);
  uVar1 = FUN_005e7140(iVar5);
  FUN_005e5d20(uVar1);
  uVar1 = FUN_005e7140(iVar3);
  FUN_005e5d20(uVar1);
  uVar1 = FUN_005e5d20(param_2,s_Classes__006b1218,param_1 + 0x30,&DAT_006a90d0);
  uVar1 = FUN_005ed360(uVar1);
  FUN_005e5d20(uVar1);
  uVar1 = FUN_005e5d20(param_2,s_Global_funcs__006b1208,param_1 + 0x44,&DAT_006a90d0);
  uVar1 = FUN_005ed360(uVar1);
  FUN_005e5d20(uVar1);
  uVar1 = FUN_005e5d20(param_2,s_Globals__006b11fc,param_1 + 0x58,&DAT_006a90d0);
  uVar1 = FUN_005ed360(uVar1);
  FUN_005e5d20(uVar1);
  uVar1 = FUN_005e5d20(param_2,s_Ext_vars__006b11f0,param_1 + 0x6c,&DAT_006a90d0);
  uVar1 = FUN_005ed360(uVar1);
  FUN_005e5d20(uVar1);
  uVar1 = FUN_005e5d20(param_2,s_Const_objs__006b11e0,param_1 + 0x80,&DAT_006a90d0);
  uVar1 = FUN_005ed360(uVar1);
  FUN_005e5d20(uVar1);
  uVar1 = FUN_005e5d20(param_2,s_Consts__006b11d4,param_1 + 0x94,&DAT_006a90d0);
  uVar1 = FUN_005ed360(uVar1);
  FUN_005e5d20(uVar1);
  uVar4 = 0;
  if ((*(byte *)(*(int *)(*param_2 + 4) + 4 + (int)param_2) & 6) == 0) {
    iVar2 = (**(code **)(**(int **)((int)param_2 + *(int *)(*param_2 + 4) + 0x28) + 0x2c))();
    if (iVar2 == -1) {
      uVar4 = 4;
    }
  }
  if (uVar4 != 0) {
    uVar4 = *(uint *)((int)param_2 + *(int *)(*param_2 + 4) + 4) | uVar4;
    if (*(int *)((int)param_2 + *(int *)(*param_2 + 4) + 0x28) == 0) {
      uVar4 = uVar4 | 4;
    }
    FUN_005fe7e4(uVar4,0);
  }
  return param_2;
}

