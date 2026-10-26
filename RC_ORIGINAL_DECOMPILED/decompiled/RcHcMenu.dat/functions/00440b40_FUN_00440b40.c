/*
 * FUN_00440b40 at 00440b40
 * undefined __register FUN_00440b40(undefined * param_1)
 * Address ranges: 00440b40-00440c1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00440b40(undefined *param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined *local_c;
  undefined *local_8;
  
  local_c = (undefined *)0x0;
  puStack_1c = (undefined1 *)0x440b59;
  local_8 = param_1;
  FUN_004041e4((int)param_1);
  puStack_20 = &LAB_00440c1b;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  do {
    do {
      uVar1 = FUN_00440ae4((int *)&local_8,DAT_0056f934);
    } while ((char)uVar1 != '\0');
    uVar1 = FUN_00440ae4((int *)&local_8,&DAT_00440c34);
  } while ((((char)uVar1 != '\0') ||
           (uVar1 = FUN_00440ae4((int *)&local_8,DAT_0056f938), (char)uVar1 != '\0')) ||
          (uVar1 = FUN_00440ae4((int *)&local_8,DAT_0056f93c), (char)uVar1 != '\0'));
  if (local_8 != (undefined *)0x0) {
    uVar3 = 8;
    do {
      FUN_004408e0(uVar3,(int *)&local_c);
      iVar2 = FUN_00409870(local_8,local_c);
      if (iVar2 == 0) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x256);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00440c22;
  puStack_20 = (undefined1 *)0x440c1a;
  FUN_00403dd4((int *)&local_c,2);
  return;
}

