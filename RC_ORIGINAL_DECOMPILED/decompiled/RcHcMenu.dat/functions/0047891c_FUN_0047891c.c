/*
 * FUN_0047891c at 0047891c
 * undefined __register FUN_0047891c(undefined4 param_1, int param_2)
 * Address ranges: 0047891c-00478ab8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047891c(undefined4 param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_00478ab9;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  uVar3 = FUN_00475a50(CONCAT31((int3)((uint)*(int *)(param_2 + 0x18) >> 8),
                                *(undefined1 *)(*(int *)(param_2 + 0x18) + 0x20)));
  if ((char)uVar3 != '\0') {
    uVar3 = FUN_00475a50(CONCAT31((int3)((uint)*(int *)(param_2 + 0x1c) >> 8),
                                  *(undefined1 *)(*(int *)(param_2 + 0x1c) + 0x20)));
    if ((char)uVar3 != '\0') {
      *(undefined1 *)(param_2 + 0x20) = 6;
      goto LAB_00478aa3;
    }
  }
  cVar1 = *(char *)(*(int *)(param_2 + 0x18) + 0x20);
  if (((((cVar1 == '\x01') || ((byte)(cVar1 - 0x17U) < 2)) || (cVar1 == '#')) &&
      (((cVar1 = *(char *)(*(int *)(param_2 + 0x1c) + 0x20), cVar1 == '\x01' ||
        ((byte)(cVar1 - 0x17U) < 2)) || (cVar1 == '#')))) && (*(char *)(param_2 + 6) == '\x10')) {
    *(undefined1 *)(param_2 + 0x20) = 1;
  }
  else {
    bVar2 = FUN_00475a6c(*(char *)(*(int *)(param_2 + 0x18) + 0x20));
    if (bVar2) {
      uVar3 = FUN_00475a50(CONCAT31((int3)((uint)*(int *)(param_2 + 0x1c) >> 8),
                                    *(undefined1 *)(*(int *)(param_2 + 0x1c) + 0x20)));
      if (((char)uVar3 != '\0') && (*(char *)(param_2 + 6) == '\x10')) {
        *(undefined1 *)(param_2 + 0x20) = 0xb;
        goto LAB_00478aa3;
      }
    }
    bVar2 = FUN_00475a6c(*(char *)(*(int *)(param_2 + 0x18) + 0x20));
    if (bVar2) {
      uVar3 = FUN_00475a50(CONCAT31((int3)((uint)*(int *)(param_2 + 0x1c) >> 8),
                                    *(undefined1 *)(*(int *)(param_2 + 0x1c) + 0x20)));
      if (((char)uVar3 != '\0') && (*(char *)(param_2 + 6) == '\x11')) {
        *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(*(int *)(param_2 + 0x18) + 0x20);
        goto LAB_00478aa3;
      }
    }
    bVar2 = FUN_00475a6c(*(char *)(*(int *)(param_2 + 0x18) + 0x20));
    if (bVar2) {
      bVar2 = FUN_00475a6c(*(char *)(*(int *)(param_2 + 0x1c) + 0x20));
      if ((bVar2) && (*(char *)(param_2 + 6) == '\x11')) {
        *(undefined1 *)(param_2 + 0x20) = 6;
        goto LAB_00478aa3;
      }
    }
    cVar1 = *(char *)(*(int *)(param_2 + 0x18) + 0x20);
    if ((cVar1 == '\x01') || (((byte)(cVar1 - 0x17U) < 2 || (cVar1 == '#')))) {
      bVar2 = FUN_00475a6c(*(char *)(*(int *)(param_2 + 0x1c) + 0x20));
      if ((bVar2) && (*(char *)(param_2 + 6) == '\x11')) {
        *(undefined1 *)(*(int *)(param_2 + 0x18) + 0x20) =
             *(undefined1 *)(*(int *)(param_2 + 0x1c) + 0x20);
        *(undefined1 *)(param_2 + 0x20) = 6;
        goto LAB_00478aa3;
      }
    }
    cVar1 = *(char *)(*(int *)(param_2 + 0x18) + 0x20);
    if (((cVar1 == '\x01') || ((byte)(cVar1 - 0x17U) < 2)) || (cVar1 == '#')) {
      uVar3 = FUN_00475a50(CONCAT31((int3)((uint)*(int *)(param_2 + 0x1c) >> 8),
                                    *(undefined1 *)(*(int *)(param_2 + 0x1c) + 0x20)));
      if (((char)uVar3 != '\0') && (*(char *)(*(int *)(param_2 + 0x18) + 4) == '\x01')) {
        *(undefined1 *)(*(int *)(param_2 + 0x18) + 0x20) = 0xb;
        goto LAB_00478aa3;
      }
    }
    FUN_00406a48((undefined4 *)PTR_PTR_00572030,(int *)&local_8);
    FUN_00466d84(local_8,0);
  }
LAB_00478aa3:
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00478ac0;
  puStack_14 = (undefined1 *)0x478ab8;
  FUN_00403db0((int *)&local_8);
  return;
}

