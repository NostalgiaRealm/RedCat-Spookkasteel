/*
 * FUN_006113d2 at 006113d2
 * undefined FUN_006113d2(void)
 * Address ranges: 006113d2-0061153e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_006113d2(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [4];
  uint local_8;
  
  if ((DAT_00710064 & 0x2000) != 0) {
    DAT_00710064 = DAT_00710064 & 0xffffdfff;
    uVar1 = FUN_006133a8(local_c,0);
    FUN_00614df0(uVar1);
    DAT_00710064 = DAT_00710064 | 0x2000;
    puVar4 = local_14;
    goto LAB_0061151c;
  }
  if (*DAT_00710054 != '?') {
    if (*DAT_00710054 == '\0') {
      uVar1 = 2;
      goto LAB_00611531;
    }
LAB_0061152b:
    uVar1 = 1;
LAB_00611531:
    FUN_00614fc6(uVar1);
    return param_1;
  }
  DAT_00710054 = DAT_00710054 + 1;
  uVar1 = FUN_0061153f(local_14);
  FUN_00614df0(uVar1);
  iVar2 = FUN_00615051();
  iVar3 = FUN_00615028();
  if (iVar3 != 0) {
    if ((*DAT_00710054 != '\0') && (*DAT_00710054 != '@')) {
      uVar1 = FUN_00611a1e(local_1c);
      FUN_00614df0(uVar1);
      iVar3 = FUN_0061503c();
      if (iVar3 == 0) {
        puVar4 = local_c;
        puVar5 = local_1c;
        FUN_006151bd(local_24,&DAT_006b1504);
        uVar1 = FUN_006151fc(puVar5,puVar4);
        FUN_006154c8(uVar1);
      }
    }
    if ((iVar2 != 0) && (iVar3 = FUN_0061503c(), iVar3 == 0)) {
      local_8 = local_8 | 0x20;
    }
    iVar3 = FUN_0061503c();
    if (iVar3 == 0) {
      if (*DAT_00710054 != '\0') {
        if (*DAT_00710054 != '@') goto LAB_0061152b;
        DAT_00710054 = DAT_00710054 + 1;
      }
      if (((DAT_00710064 & 0x1000) == 0) || (iVar2 != 0)) {
        puVar4 = (undefined1 *)FUN_0061230e(local_24,local_c);
        goto LAB_0061151c;
      }
      uVar1 = FUN_00614dc3();
      FUN_0061230e(local_1c,uVar1);
    }
  }
  puVar4 = local_c;
LAB_0061151c:
  FUN_00614df0(puVar4);
  return param_1;
}

