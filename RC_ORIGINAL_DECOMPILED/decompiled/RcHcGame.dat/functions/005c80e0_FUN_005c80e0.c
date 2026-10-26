/*
 * FUN_005c80e0 at 005c80e0
 * undefined FUN_005c80e0(void)
 * Address ranges: 005c80e0-005c838a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_005c80e0(void)

{
  FARPROC pFVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piStack_1f4;
  undefined4 uStack_1cc;
  undefined2 uStack_1c8;
  undefined4 auStack_1c0 [4];
  undefined4 uStack_1b0;
  undefined1 auStack_1a8 [12];
  undefined1 auStack_19c [12];
  int local_190 [100];
  
  FUN_0060ca3d();
  FUN_0060d240();
  piStack_1f4 = (int *)0x5c810e;
  FUN_0060d588();
  piStack_1f4 = local_190;
  FUN_005c7dc0();
  DAT_006cc49c = LoadLibraryA(s_DSOUND_DLL_006a9c38);
  if (DAT_006cc49c == (HMODULE)0x0) {
    FUN_005c7dc0();
    return (undefined4 *)0x0;
  }
  pFVar1 = GetProcAddress(DAT_006cc49c,s_DirectSoundCreate_006a9bf0);
  if (pFVar1 == (FARPROC)0x0) {
    FUN_005c7dc0();
    FreeLibrary(DAT_006cc49c);
    return (undefined4 *)0x0;
  }
  piVar2 = (int *)(*pFVar1)();
  if (piVar2 != (int *)0x0) {
    FUN_005c8390();
    piStack_1f4 = piVar2;
    FUN_0060d588(auStack_19c,s_CreateSoundManager____DirectSoun_006a9b80);
    FUN_005c7dc0(auStack_19c);
    FreeLibrary(DAT_006cc49c);
    return (undefined4 *)0x0;
  }
  puVar3 = (undefined4 *)FUN_005cf3b0();
  if (puVar3 == (undefined4 *)0x0) {
    FUN_005c7dc0();
    (**(code **)(*DAT_006cc490 + 8))();
    piStack_1f4 = (int *)0x5c8203;
    FreeLibrary(DAT_006cc49c);
    return (undefined4 *)0x0;
  }
  *puVar3 = 0;
  puVar3[1] = 1;
  puVar3[3] = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  DAT_006cc498 = FUN_0061f613();
  puVar6 = auStack_1c0;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uStack_1cc = 0x100004;
  auStack_1c0[0] = 0x24;
  auStack_1c0[1] = 1;
  auStack_1c0[2] = 0;
  uStack_1b0 = 0;
  piStack_1f4 = DAT_006cc490;
  iVar5 = (**(code **)(*DAT_006cc490 + 0x18))();
  if (iVar5 == 0) {
    iVar5 = (**(code **)(*DAT_006cc490 + 0xc))(DAT_006cc490,&uStack_1cc,puVar3 + 2,0);
    if (iVar5 == 0) {
      piVar2 = (int *)puVar3[2];
      iVar5 = (**(code **)(*piVar2 + 0x38))(piVar2,&piStack_1f4);
      if (iVar5 == 0) {
        return puVar3;
      }
      uVar4 = FUN_005c8390(iVar5);
      FUN_0060d588(auStack_1c0 + 2,s_CreateSoundManager____SetFormat__006a9aec,iVar5,uVar4);
    }
    else {
      uVar4 = FUN_005c8390(iVar5);
      FUN_0060d588(auStack_1c0 + 2,s_CreateSoundManager____IDirectSou_006a9aa0,iVar5,uVar4);
    }
    FUN_005c7dc0(auStack_1c0 + 2);
    (**(code **)(*DAT_006cc490 + 8))(DAT_006cc490);
    FreeLibrary(DAT_006cc49c);
  }
  else {
    uVar4 = FUN_005c8390(iVar5);
    FUN_0060d588(auStack_1a8,s_CreateSoundManager____IDirectSou_006a9a50,iVar5,uVar4);
    FUN_005c7dc0(auStack_1a8);
  }
  FUN_005cf400(puVar3);
  _DAT_007203c0 = 0;
  return (undefined4 *)0x0;
}

