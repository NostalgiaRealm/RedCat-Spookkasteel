/*
 * FUN_00411fa4 at 00411fa4
 * undefined __register FUN_00411fa4(undefined * param_1, undefined4 * param_2)
 * Address ranges: 00411fa4-0041203a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00411fa4(undefined *param_1,undefined4 *param_2)

{
  char cVar1;
  LPCVOID pvVar2;
  int iVar3;
  HMODULE pHVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd0;
  undefined **ppuVar6;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  byte *local_14;
  undefined *local_10;
  undefined1 local_c;
  undefined4 *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = (byte *)0x0;
  puStack_24 = &LAB_0041203b;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  local_8 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    pHVar4 = (HMODULE)0x0;
    puStack_20 = &stack0xfffffffc;
  }
  else {
    pvVar2 = (LPCVOID)FUN_00402fdc(param_2);
    iVar3 = FUN_004064f8(pvVar2);
    pHVar4 = (HMODULE)FUN_00406500(iVar3);
  }
  cVar1 = FUN_00411cb0(param_1,pHVar4,&local_8);
  if (cVar1 == '\0') {
    local_c = 0xb;
    ppuVar6 = &local_10;
    in_stack_ffffffd0 = 0;
    local_10 = param_1;
    FUN_00406a48((undefined4 *)PTR_PTR_00572300,(int *)&local_14);
    uVar5 = FUN_0040cf28((int)&DAT_004104f8,'\x01',local_14,in_stack_ffffffd0,ppuVar6);
    FUN_0040382c(uVar5);
  }
  *in_FS_OFFSET = in_stack_ffffffd0;
  puStack_28 = &LAB_00412042;
  FUN_00403db0((int *)&local_14);
  return;
}

