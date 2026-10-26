/*
 * FUN_004324f4 at 004324f4
 * undefined __register FUN_004324f4(int * param_1, uint * param_2)
 * Address ranges: 004324f4-00432589
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004324f4(int *param_1,uint *param_2)

{
  int *piVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  uint *local_c;
  uint *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (uint *)0x0;
  puStack_20 = &LAB_0043258a;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar3 = &stack0xfffffffc;
  local_8 = param_2;
  if (((*(byte *)(param_1 + 0x10) & 0x20) != 0) &&
     (uVar5 = (*(byte *)(param_1 + 8) & 1) == 0, puVar3 = &stack0xfffffffc, (bool)uVar5)) {
    FUN_00432714((int)param_1,(int *)&local_c);
    FUN_00404140((uint *)param_1[2],local_c);
    puVar3 = puStack_1c;
    if ((bool)uVar5) {
      piVar1 = (int *)param_1[1];
      if (piVar1 != (int *)0x0) {
        uVar4 = FUN_0040320c(piVar1,(int)&PTR_FUN_0042e674);
        if (((char)uVar4 != '\0') && (puVar3 = puStack_1c, (*(byte *)(piVar1 + 8) & 1) != 0))
        goto LAB_00432556;
      }
      bVar2 = true;
      goto LAB_0043255c;
    }
  }
LAB_00432556:
  puStack_1c = puVar3;
  bVar2 = false;
LAB_0043255c:
  FUN_00419464(param_1,local_8);
  if (bVar2) {
    FUN_00432744((int)param_1,local_8);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00432591;
  puStack_20 = (undefined1 *)0x432589;
  FUN_00403db0((int *)&local_c);
  return;
}

