/*
 * FUN_005b3b90 at 005b3b90
 * undefined FUN_005b3b90(void)
 * Address ranges: 005b3b90-005b3d5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_005b3b90(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_44;
  undefined1 local_40 [4];
  int local_3c;
  int *local_38;
  undefined1 local_34 [4];
  undefined1 local_30 [48];
  
  local_38 = param_1;
  if (*param_1 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0xea,
                 &DAT_006b3f70,0);
    return (undefined4 *)0x0;
  }
  puVar3 = (undefined4 *)FUN_005cf3b0(0x5c);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_005cf220(0x6e,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0xf2,
                 &DAT_006b3f70,0);
    return (undefined4 *)0x0;
  }
  piVar1 = puVar3 + 2;
  piVar2 = puVar3 + 5;
  puVar3[1] = 0;
  *piVar1 = 0;
  *piVar2 = 0;
  iVar4 = FUN_005cf470();
  *piVar1 = iVar4;
  if (iVar4 == 0) {
    uVar6 = 0xfc;
  }
  else {
    *puVar3 = 0;
    puVar3[3] = 1;
    puVar3[4] = param_1;
    iVar4 = FUN_005bd440();
    iVar5 = 0;
    *piVar2 = iVar4;
    puVar3[0xc] = 0xffffffff;
    puVar3[0x15] = 0xffffffff;
    puVar3[0x16] = 0;
    puVar3[0xd] = 0xffffffff;
    FUN_005d0200(0,0,0,0,0,0);
    if (*piVar2 != 0) {
      local_3c = FUN_005b7140();
      if (0 < local_3c) {
        do {
          FUN_005b7150(&local_44,local_30,local_40);
          iVar4 = FUN_005cf7c0(local_44,local_30,local_34);
          if (iVar4 == 0) {
            uVar6 = 0x11f;
            goto LAB_005b3d15;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < local_3c);
      }
      FUN_005b3070();
      FUN_005b3070();
      FUN_005b3b00();
      DAT_006cadd4 = DAT_006cadd4 + 1;
      return puVar3;
    }
    uVar6 = 0x10b;
  }
LAB_005b3d15:
  FUN_005cf220(0x6e,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,uVar6,
               &DAT_006b3f70,0);
  if (*piVar1 != 0) {
    FUN_005cf750();
  }
  if (*piVar2 != 0) {
    FUN_005bd500();
  }
  FUN_005cf400(puVar3);
  _DAT_007203c0 = 0;
  return (undefined4 *)0x0;
}

