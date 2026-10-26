/*
 * FUN_0044e4b4 at 0044e4b4
 * undefined __register FUN_0044e4b4(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 0044e4b4-0044e58c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044e4b4(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  uint *local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = (uint *)0x0;
  puStack_20 = &LAB_0044e58d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = param_3;
  local_8 = param_2;
  iVar2 = FUN_00437280((int)param_1);
  if (iVar2 == 1) {
    iVar2 = FUN_00432688((int)local_8);
    FUN_00403e98((int *)&local_10,(undefined4 *)0x0,iVar2 + 1);
    uVar3 = FUN_00404030((int)local_10);
    puVar4 = FUN_004041f4((undefined *)local_10);
    FUN_00432698((int)local_8,puVar4,uVar3);
    iVar2 = FUN_00404030((int)local_10);
    if (0 < iVar2) {
      iVar5 = 1;
      do {
        cVar1 = *(char *)((int)local_10 + iVar5 + -1);
        if ((cVar1 == '\n') || (cVar1 == '\r')) {
          FUN_00404364((int *)&local_10,iVar5 - 1);
          break;
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00432744((int)param_1,local_10);
  }
  FUN_004370f4(param_1,local_8);
  FUN_00431d2c(local_8,CONCAT31((int3)((uint)extraout_EDX >> 8),5),extraout_ECX);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_0044aa98(param_1,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),1),extraout_ECX_00);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0044e594;
  puStack_20 = (undefined1 *)0x44e58c;
  FUN_00403db0((int *)&local_10);
  return;
}

