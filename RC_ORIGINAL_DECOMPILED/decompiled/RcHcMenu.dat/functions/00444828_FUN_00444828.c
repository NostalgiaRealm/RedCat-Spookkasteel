/*
 * FUN_00444828 at 00444828
 * undefined4 __register FUN_00444828(int * param_1)
 * Address ranges: 00444828-004448a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00444828(int *param_1)

{
  HMENU pHVar1;
  char *pcVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined1 *puVar4;
  char local_204 [512];
  
  puVar4 = &stack0xfffffffc;
  local_204[0] = '\0';
  if (param_1[0xb] != 0) {
    pHVar1 = (HMENU)(**(code **)(*param_1 + 0x34))();
    FUN_00444788(pHVar1,extraout_EDX,extraout_ECX,(int)puVar4);
  }
  if (param_1[0xc] != 0) {
    pcVar2 = FUN_004041f4((undefined *)param_1[0xc]);
    iVar3 = FUN_0040a22c(pcVar2,local_204);
    if (iVar3 == 0) {
      return 0;
    }
  }
  FUN_00403fe0(param_1 + 0xc,local_204,0x200);
  return 1;
}

