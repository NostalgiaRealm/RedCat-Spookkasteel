/*
 * FUN_005d3e50 at 005d3e50
 * undefined FUN_005d3e50(void)
 * Address ranges: 005d3e50-005d3f2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d3e50(undefined4 param_1,int param_2)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  int in_stack_00000018;
  undefined1 local_c [12];
  
  fVar1 = *(float *)(param_2 + 0x20);
  FUN_005b2fe0(local_c);
  fVar2 = (float10)FUN_005b2fd0();
  if ((float10)fVar1 <= fVar2) {
    return 0;
  }
  FUN_005b2f20();
  fVar3 = (float10)FUN_005b2e40();
  if (fVar3 < (float10)0.0) {
    return 0;
  }
  fVar3 = ((float10)1.0 - (float10)(float)fVar2 / (float10)fVar1) * fVar3;
  fVar2 = fVar3 * (float10)*(float *)(param_2 + 4) + (float10)*(float *)(in_stack_00000018 + 8);
  *(float *)(in_stack_00000018 + 8) = (float)fVar2;
  if ((float10)255.0 < fVar2) {
    *(undefined4 *)(in_stack_00000018 + 8) = 0x437f0000;
  }
  fVar2 = fVar3 * (float10)*(float *)(param_2 + 8) + (float10)*(float *)(in_stack_00000018 + 0xc);
  *(float *)(in_stack_00000018 + 0xc) = (float)fVar2;
  if ((float10)255.0 < fVar2) {
    *(undefined4 *)(in_stack_00000018 + 0xc) = 0x437f0000;
  }
  fVar2 = fVar3 * (float10)*(float *)(param_2 + 0xc) + (float10)*(float *)(in_stack_00000018 + 0x10)
  ;
  *(float *)(in_stack_00000018 + 0x10) = (float)fVar2;
  if ((float10)255.0 < fVar2) {
    *(undefined4 *)(in_stack_00000018 + 0x10) = 0x437f0000;
  }
  return 1;
}

