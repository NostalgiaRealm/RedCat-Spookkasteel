/*
 * FUN_0056cffc at 0056cffc
 * undefined __register FUN_0056cffc(undefined4 param_1, undefined4 param_2, int param_3, int param_4)
 * Address ranges: 0056cffc-0056d17e;0056d2ee-0056d33c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056cffc(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  DWORD DVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 **ppuVar4;
  undefined4 uStack_394;
  undefined1 *puStack_390;
  undefined1 *puStack_38c;
  undefined4 uStack_388;
  undefined1 *puStack_384;
  undefined1 *puStack_380;
  undefined4 uStack_37c;
  undefined1 *puStack_378;
  undefined1 *puStack_374;
  undefined4 uStack_370;
  undefined1 *puStack_36c;
  undefined1 *puStack_368;
  int local_358 [5];
  char *local_344;
  undefined1 local_340;
  byte *local_33c;
  WORD local_338 [2];
  int local_334;
  uint local_330;
  undefined4 local_1e0 [115];
  undefined4 *local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_358[0] = 0;
  local_358[1] = 0;
  local_358[4] = 0;
  local_358[3] = 0;
  local_358[2] = 0;
  local_33c = (byte *)0x0;
  local_14 = (undefined4 *)0x0;
  puStack_368 = (undefined1 *)0x56d042;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4(param_3);
  puStack_368 = (undefined1 *)0x56d04a;
  FUN_004041e4(param_4);
  puStack_368 = (undefined1 *)0x56d05b;
  FUN_00404780((int)local_338,(int)&DAT_00408a5c);
  puStack_36c = &LAB_0056d33d;
  uStack_370 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_370;
  puStack_374 = (undefined1 *)0x56d06e;
  puStack_368 = &stack0xfffffffc;
  bVar1 = FUN_0056ca58();
  if (bVar1) {
    puStack_378 = &LAB_0056d2e7;
    uStack_37c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_37c;
    puStack_384 = &LAB_0056d293;
    uStack_388 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_388;
    puStack_38c = (undefined1 *)0x56d0a3;
    puStack_380 = &stack0xfffffffc;
    puStack_374 = &stack0xfffffffc;
    FUN_00406dc2(local_1e0,DAT_00571fec);
    puStack_390 = &LAB_0056d17f;
    uStack_394 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_394;
    puStack_38c = &stack0xfffffffc;
    DVar2 = FUN_00409e80(DAT_00571fec,0x3f,local_338);
    if (DVar2 == 0) {
      if ((local_330 & 1) != 0) {
        ppuVar4 = &local_14;
        FUN_00406a48(&PTR_DAT_0056cff4,(int *)&local_33c);
        local_344 = DAT_00571fec;
        local_340 = 0xb;
        FUN_0040a894(local_33c,&local_344,0,(int *)ppuVar4);
        FUN_004579bc((undefined *)local_14,'\0');
        piVar3 = FUN_0040ceec((int *)&DAT_00408ac4,'\x01',local_14);
        FUN_0040382c(piVar3);
      }
      if (40000 < local_334) {
        FUN_0056cb70();
      }
      FUN_00407051((undefined *)local_1e0);
      FUN_004028b8();
    }
    else {
      FUN_0040704a((undefined *)local_1e0);
      FUN_004028b8();
    }
    *in_FS_OFFSET = uStack_394;
    puStack_38c = &LAB_0056d186;
    puStack_390 = (undefined1 *)0x56d17e;
    FUN_00409ed0((int)local_338);
    return;
  }
  *in_FS_OFFSET = uStack_370;
  puStack_368 = &LAB_0056d344;
  puStack_36c = (undefined1 *)0x56d30b;
  FUN_00403dd4(local_358,5);
  puStack_36c = (undefined1 *)0x56d316;
  FUN_00403db0((int *)&local_33c);
  puStack_36c = (undefined1 *)0x56d327;
  FUN_0040484c((int)local_338,(int)&DAT_00408a5c);
  puStack_36c = (undefined1 *)0x56d334;
  FUN_00403dd4((int *)&local_14,2);
  puStack_36c = (undefined1 *)0x56d33c;
  FUN_00403db0(&param_4);
  return;
}

