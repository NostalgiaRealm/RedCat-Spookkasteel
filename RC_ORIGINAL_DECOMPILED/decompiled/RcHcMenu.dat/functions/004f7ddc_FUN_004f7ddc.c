/*
 * FUN_004f7ddc at 004f7ddc
 * undefined __register FUN_004f7ddc(int * param_1)
 * Address ranges: 004f7ddc-004f7e34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f7ddc(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined1 *puVar3;
  
  puVar3 = &stack0xfffffffc;
  *(undefined1 *)((int)param_1 + 0x1f9) = 0;
  iVar1 = FUN_004f6c58(param_1[0x7c],param_1[0x81]);
  iVar2 = FUN_004f6c58(param_1[0x7c],param_1[0x80]);
  FUN_004f7cb0(iVar2,iVar1,extraout_ECX,(int)puVar3);
  FUN_00403270(param_1,extraout_EDX,puVar3);
  return;
}

