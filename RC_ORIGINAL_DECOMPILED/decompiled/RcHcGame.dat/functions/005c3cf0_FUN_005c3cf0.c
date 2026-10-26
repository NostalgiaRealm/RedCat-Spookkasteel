/*
 * FUN_005c3cf0 at 005c3cf0
 * undefined FUN_005c3cf0(void)
 * Address ranges: 005c3cf0-005c3e0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c3cf0(int param_1,int param_2,uint param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((*(int *)(param_1 + 0x70) != 0) || (*(int *)(param_1 + 0x6c) != 0)) ||
     (*(int *)(param_1 + 0x74) != 0)) {
    uVar3 = 0xd01;
LAB_005c3df4:
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,uVar3,
                 &DAT_006b3f70,0);
    return 0;
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_005c23a0(param_1);
  }
  if (param_2 != 0) {
    cVar1 = FUN_005c6a70();
    if ((uint)(1 << (cVar1 * '\b' - 1U & 0x1f)) <= param_3 >> 1) {
      uVar3 = 0xd0d;
      goto LAB_005c3df4;
    }
    iVar2 = FUN_005c6ab0();
    if (iVar2 != 0) {
      FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0xd12,
                   &DAT_006b3f70,0);
    }
    if ((param_4 != 0) && (*(int *)(param_1 + 0x28) != 0)) {
      *(undefined4 *)(param_1 + 0x1c) = 1;
      *(uint *)(param_1 + 0x20) = param_3;
      iVar2 = FUN_005c3e10(param_1);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0x20) = 1;
      }
      goto LAB_005c3dca;
    }
  }
  *(int *)(param_1 + 0x1c) = param_2;
  *(uint *)(param_1 + 0x20) = param_3;
LAB_005c3dca:
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_005c1f40(param_1);
  }
  return 1;
}

