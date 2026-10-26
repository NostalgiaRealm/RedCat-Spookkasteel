/*
 * FUN_004a4500 at 004a4500
 * undefined __register FUN_004a4500(int param_1, int param_2)
 * Address ranges: 004a4500-004a4579;004a45b2-004a4730
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a4500(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined *local_38;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined *local_28;
  undefined *local_24;
  undefined *local_20;
  byte *local_1c;
  undefined1 *local_18;
  uint uVar4;
  
  local_18 = &stack0xfffffffc;
  iVar3 = 6;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  LOCK();
  UNLOCK();
  local_1c = &LAB_004a4731;
  local_20 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  local_24 = (undefined *)0x4a4533;
  FUN_00403db0((int *)0x0);
  if (-1 < param_2) {
    local_18 = (undefined1 *)(param_2 + 1);
    uVar4 = 0;
    do {
      if (((int)uVar4 < 0) || (uVar2 = uVar4, param_2 < (int)uVar4)) {
        local_24 = (undefined *)0x4a455a;
        uVar2 = thunk_FUN_00402874(uVar4);
      }
      local_1c = (byte *)(param_1 + uVar2 * 8);
      switch(local_1c[4]) {
      case 0:
        local_24 = puRam00000000;
        local_28 = &DAT_004a4748;
        local_2c = (undefined *)0x4a45c9;
        FUN_00409bd8(*(undefined4 *)local_1c,(int *)&local_20);
        local_30 = (undefined *)0x4a45d9;
        FUN_004040f0((int *)0x0,3);
        break;
      case 1:
        local_24 = puRam00000000;
        local_28 = &DAT_004a4748;
        local_2c = (undefined *)0x4a45fc;
        FUN_00403f58((int *)&local_24,(uint)(byte)(&DAT_00571600)[*local_1c]);
        local_20 = local_24;
        local_30 = (undefined *)0x4a460c;
        FUN_004040f0((int *)0x0,3);
        break;
      case 2:
        local_24 = puRam00000000;
        local_28 = &DAT_004a4748;
        local_2c = (undefined *)0x4a4628;
        FUN_00403f58((int *)&local_28,CONCAT31((int3)((uint)local_1c >> 8),*local_1c));
        local_20 = local_28;
        local_30 = (undefined *)0x4a4638;
        FUN_004040f0((int *)0x0,3);
        break;
      case 3:
        local_24 = puRam00000000;
        local_28 = &DAT_004a4748;
        puVar1 = *(undefined4 **)local_1c;
        local_2c = (undefined *)CONCAT22((short)((uint)param_1 >> 0x10),*(undefined2 *)(puVar1 + 2))
        ;
        local_30 = (undefined *)puVar1[1];
        local_34 = (undefined *)*puVar1;
        local_38 = (undefined *)0x4a465e;
        FUN_0040a970((int *)&local_2c);
        local_20 = local_2c;
        local_30 = (undefined *)0x4a466e;
        FUN_004040f0((int *)0x0,3);
        break;
      case 4:
        local_24 = puRam00000000;
        local_28 = &DAT_004a4748;
        local_2c = (undefined *)0x4a468a;
        FUN_00403fd4((int *)&local_30,*(byte **)local_1c);
        local_20 = local_30;
        local_30 = (undefined *)0x4a469a;
        FUN_004040f0((int *)0x0,3);
        break;
      case 6:
        local_24 = puRam00000000;
        local_28 = &DAT_004a4748;
        local_2c = (undefined *)0x4a46b3;
        FUN_00403f68((int *)&local_34,*(char **)local_1c);
        local_20 = local_34;
        local_30 = (undefined *)0x4a46c3;
        FUN_004040f0((int *)0x0,3);
        break;
      case 0xb:
        local_24 = puRam00000000;
        local_28 = &DAT_004a4748;
        local_20 = *(undefined **)local_1c;
        local_30 = (undefined *)0x4a46e1;
        FUN_004040f0((int *)0x0,3);
        break;
      case 0xd:
        local_24 = puRam00000000;
        local_28 = &DAT_004a4748;
        local_2c = (undefined *)0x4a46fa;
        FUN_004052a4((int *)&local_38,*(VARIANTARG **)local_1c);
        local_20 = local_38;
        local_30 = (undefined *)0x4a470a;
        FUN_004040f0((int *)0x0,3);
      }
      uVar4 = uVar4 + 1;
      local_18 = (undefined1 *)((int)local_18 + -1);
    } while (local_18 != (undefined1 *)0x0);
  }
  *in_FS_OFFSET = local_20;
  local_18 = &LAB_004a4738;
  local_1c = (byte *)0x4a4730;
  FUN_00403dd4((int *)&local_38,7);
  return;
}

