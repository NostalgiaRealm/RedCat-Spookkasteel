/*
 * FUN_004b0900 at 004b0900
 * undefined __register FUN_004b0900(void)
 * Address ranges: 004b0900-004b0aa0;004b0aa8-004b0ac2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b0900(void)

{
  uint uVar1;
  undefined4 *extraout_EDX;
  undefined4 *extraout_EDX_00;
  undefined4 *extraout_EDX_01;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 **ppuVar4;
  undefined4 uVar5;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 *local_10;
  undefined *local_c;
  undefined4 *local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = (undefined *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  local_18 = (undefined4 *)0x0;
  local_1c = 0;
  local_20 = (undefined4 *)0x0;
  local_24 = 0;
  puStack_30 = &LAB_004b0ac3;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  bVar3 = _DAT_00574418 == 0;
  _DAT_00574418 = _DAT_00574418 + -1;
  if (bVar3) {
    puStack_38 = (undefined1 *)0x4b0938;
    FUN_00451854(*(undefined4 *)PTR_DAT_005723fc,(int *)&local_c);
    puStack_38 = (undefined1 *)0x4b0943;
    FUN_00409f84(local_c,(int *)&local_8);
    puStack_38 = (undefined1 *)0x4b0950;
    FUN_00404038((int *)&local_8,(undefined4 *)"settings\\menu.ini");
    puStack_38 = (undefined1 *)0x4b095f;
    DAT_0057441c = FUN_0045c5fc((int *)&PTR_FUN_0045c5a0,'\x01',local_8);
    puStack_3c = &LAB_004b0aa1;
    uStack_40 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_40;
    DAT_00574420 = 1;
    puStack_38 = &stack0xfffffffc;
    do {
      uVar5 = 0;
      ppuVar4 = &local_10;
      FUN_00409bd8(DAT_00574420,&local_14);
      (**(code **)*DAT_0057441c)(DAT_0057441c,"MenuStrings",local_14,ppuVar4,uVar5);
      uVar1 = DAT_00574420 - 1;
      puVar2 = local_10;
      if (0x4f < uVar1) {
        uVar1 = thunk_FUN_00402874(uVar1);
        puVar2 = extraout_EDX;
      }
      FUN_00403e04((int *)(&DAT_0057429c + (uVar1 + 1) * 4),puVar2);
      DAT_00574420 = DAT_00574420 + 1;
    } while (DAT_00574420 != 0x51);
    DAT_00574420 = 1;
    do {
      uVar5 = 0;
      ppuVar4 = &local_18;
      FUN_00409bd8(DAT_00574420,&local_1c);
      (**(code **)*DAT_0057441c)(DAT_0057441c,"OrdinalWords",local_1c,ppuVar4,uVar5);
      uVar1 = DAT_00574420 - 1;
      puVar2 = local_18;
      if (6 < uVar1) {
        uVar1 = thunk_FUN_00402874(uVar1);
        puVar2 = extraout_EDX_00;
      }
      FUN_00403e04((int *)((uVar1 + 1) * 4 + 0x5743dc),puVar2);
      DAT_00574420 = DAT_00574420 + 1;
    } while (DAT_00574420 != 8);
    DAT_00574420 = 1;
    do {
      uVar5 = 0;
      ppuVar4 = &local_20;
      FUN_00409bd8(DAT_00574420,&local_24);
      (**(code **)*DAT_0057441c)(DAT_0057441c,"OrdinalNumbers",local_24,ppuVar4,uVar5);
      uVar1 = DAT_00574420 - 1;
      puVar2 = local_20;
      if (6 < uVar1) {
        uVar1 = thunk_FUN_00402874(uVar1);
        puVar2 = extraout_EDX_01;
      }
      FUN_00403e04((int *)((uVar1 + 1) * 4 + 0x5743f8),puVar2);
      DAT_00574420 = DAT_00574420 + 1;
    } while (DAT_00574420 != 8);
    *in_FS_OFFSET = uStack_40;
    puStack_38 = (undefined1 *)0x4b0aa8;
    puStack_3c = (undefined1 *)0x4b0aa0;
    FUN_00403094(DAT_0057441c);
    return;
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004b0aca;
  puStack_30 = (undefined1 *)0x4b0ac2;
  FUN_00403dd4(&local_24,8);
  return;
}

