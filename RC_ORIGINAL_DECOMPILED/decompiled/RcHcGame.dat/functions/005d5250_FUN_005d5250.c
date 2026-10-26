/*
 * FUN_005d5250 at 005d5250
 * undefined FUN_005d5250(void)
 * Address ranges: 005d5250-005d5420
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005d5250(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 == 0) {
    return 0;
  }
  iVar1 = FUN_005cf3b0(*(int *)(iVar3 + 0x16c) << 2);
  *(int *)(iVar3 + 0xd5d4) = iVar1;
  if (iVar1 != 0) {
    iVar1 = FUN_005cf3b0(*(int *)(iVar3 + 0x178) << 2);
    *(int *)(iVar3 + 0xd5d0) = iVar1;
    if (iVar1 != 0) {
      iVar1 = FUN_005cf3b0(*(int *)(iVar3 + 0x17c) << 2);
      *(int *)(iVar3 + 0xd5d8) = iVar1;
      if (iVar1 != 0) {
        iVar1 = FUN_005cf3b0(*(int *)(iVar3 + 0x16c) << 2);
        *(int *)(iVar3 + 0x1d5dc) = iVar1;
        if (iVar1 != 0) {
          puVar4 = *(undefined4 **)(iVar3 + 0xd5d4);
          for (uVar2 = *(uint *)(iVar3 + 0x16c) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
            *(undefined1 *)puVar4 = 0;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          puVar4 = *(undefined4 **)(iVar3 + 0xd5d0);
          for (uVar2 = *(uint *)(iVar3 + 0x178) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
            *(undefined1 *)puVar4 = 0;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          puVar4 = *(undefined4 **)(iVar3 + 0xd5d8);
          for (uVar2 = *(uint *)(iVar3 + 0x17c) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
            *(undefined1 *)puVar4 = 0;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          puVar4 = *(undefined4 **)(iVar3 + 0x1d5dc);
          for (uVar2 = *(uint *)(iVar3 + 0x16c) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined1 *)puVar4 = 0;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          FUN_005d5870(*(undefined4 *)(param_1 + 0x18));
          iVar3 = 0;
          do {
            iVar1 = iVar3 + 0x101;
            *(undefined1 *)(iVar3 + 0xd5dc + *(int *)(param_1 + 0x18)) = 1;
            iVar3 = iVar1;
          } while (iVar1 < 0x10100);
          return 1;
        }
      }
    }
  }
  if (*(int *)(iVar3 + 0xd5d4) != 0) {
    FUN_005cf400(*(int *)(iVar3 + 0xd5d4));
    *(undefined4 *)(iVar3 + 0xd5d4) = 0;
    _DAT_007203c0 = 0;
  }
  if (*(int *)(iVar3 + 0xd5d0) != 0) {
    FUN_005cf400(*(int *)(iVar3 + 0xd5d0));
    *(undefined4 *)(iVar3 + 0xd5d0) = 0;
    _DAT_007203c0 = 0;
  }
  if (*(int *)(iVar3 + 0xd5d8) != 0) {
    FUN_005cf400(*(int *)(iVar3 + 0xd5d8));
    *(undefined4 *)(iVar3 + 0xd5d8) = 0;
    _DAT_007203c0 = 0;
  }
  if (*(int *)(iVar3 + 0x1d5dc) != 0) {
    FUN_005cf400(*(int *)(iVar3 + 0x1d5dc));
    *(undefined4 *)(iVar3 + 0x1d5dc) = 0;
    _DAT_007203c0 = 0;
  }
  *(undefined4 *)(iVar3 + 0xd5d4) = 0;
  *(undefined4 *)(iVar3 + 0xd5d0) = 0;
  *(undefined4 *)(iVar3 + 0xd5d8) = 0;
  *(undefined4 *)(iVar3 + 0x1d5dc) = 0;
  return 0;
}

