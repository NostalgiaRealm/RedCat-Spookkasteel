/*
 * FUN_005e0310 at 005e0310
 * undefined FUN_005e0310(void)
 * Address ranges: 005e0310-005e0476
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_005e0310(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  piVar1 = param_1 + 1;
  if ((short)param_1[1] != *(short *)(iVar2 + 0x18)) {
    if (param_1[2] != 0) {
      FUN_005cf400(param_1[2]);
      param_1[2] = 0;
      _DAT_007203c0 = 0;
    }
    iVar3 = FUN_005cf3b0(*(short *)(iVar2 + 0x18) * 0x18);
    param_1[2] = iVar3;
    if (iVar3 == 0) {
      FUN_005cf220(0x60,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b09ec,0x90,&DAT_006b3f70
                   ,0);
      *(undefined2 *)piVar1 = 0;
      return (int *)0x0;
    }
    *(undefined2 *)piVar1 = *(undefined2 *)(iVar2 + 0x18);
  }
  if ((short)param_1[3] != *(short *)(iVar2 + 0x20)) {
    if (param_1[4] != 0) {
      FUN_005cf400(param_1[4]);
      param_1[4] = 0;
      _DAT_007203c0 = 0;
    }
    iVar3 = FUN_005cf3b0(*(short *)(iVar2 + 0x20) * 0xc);
    param_1[4] = iVar3;
    if (iVar3 == 0) {
      FUN_005cf220(0x60,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b09ec,0xa0,&DAT_006b3f70
                   ,0);
      *(undefined2 *)(param_1 + 3) = 0;
      return (int *)0x0;
    }
    *(undefined2 *)(param_1 + 3) = *(undefined2 *)(iVar2 + 0x20);
  }
  if ((short)param_1[0xf] != *(short *)(iVar2 + 0x44)) {
    if (param_1[7] != 0) {
      FUN_005cf400(param_1[7]);
      param_1[7] = 0;
      _DAT_007203c0 = 0;
    }
    param_1[6] = (int)*(short *)(iVar2 + 0x44) << 4;
    iVar3 = FUN_005cf3b0((int)*(short *)(iVar2 + 0x44) << 4);
    param_1[7] = iVar3;
    if (iVar3 == 0) {
      FUN_005cf220(0x60,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b09ec,0xb7,&DAT_006b3f70
                   ,0);
      *(undefined2 *)(param_1 + 0xf) = 0;
      return (int *)0x0;
    }
    *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)(iVar2 + 0x44);
  }
  return piVar1;
}

