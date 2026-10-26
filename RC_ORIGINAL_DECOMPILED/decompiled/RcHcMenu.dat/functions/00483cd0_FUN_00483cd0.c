/*
 * FUN_00483cd0 at 00483cd0
 * undefined __register FUN_00483cd0(int * param_1, undefined * param_2)
 * Address ranges: 00483cd0-00483d67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00483cd0(int *param_1,undefined *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int *in_FS_OFFSET;
  int in_stack_ffffffd4;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined *local_10;
  undefined1 local_c;
  byte *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  puStack_24 = &LAB_00483d68;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  puVar1 = &stack0xfffffffc;
  if ((param_2 != (undefined *)0x0) && (puVar1 = &stack0xfffffffc, param_1[0x1e] != 0)) {
    in_stack_ffffffd4 = 0x483d04;
    piVar2 = (int *)FUN_00480ac0(param_1[0x1e],param_2);
    puVar1 = puStack_20;
    if (((piVar2 != (int *)0x0) && (param_1 != piVar2)) &&
       ((*(char *)((int)piVar2 + 0x69) == '\0' || (*(char *)((int)param_1 + 0x69) == '\0')))) {
      if ((*(char *)((int)piVar2 + 0x62) == '\0') || (piVar2[0x1b] != 0)) {
        in_stack_ffffffd4 = 0;
        FUN_00406a48((undefined4 *)PTR_PTR_005724dc,(int *)&local_8);
        local_c = 0xb;
        local_10 = param_2;
        FUN_00466e30(local_8,&local_10,0,in_stack_ffffffd4);
      }
      FUN_00403094(piVar2);
      puVar1 = puStack_20;
    }
  }
  puStack_20 = puVar1;
  *in_FS_OFFSET = in_stack_ffffffd4;
  puStack_24 = &LAB_00483d6f;
  iStack_28 = 0x483d67;
  FUN_00403db0((int *)&local_8);
  return;
}

