/*
 * FUN_004292b4 at 004292b4
 * undefined __register FUN_004292b4(int * param_1, char param_2)
 * Address ranges: 004292b4-004292ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004292b4(int *param_1,char param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00429280((int)param_1);
  if (param_2 != (char)uVar1) {
    if (param_2 == '\0') {
      param_1[0x10] = param_1[0x10] | 0x40;
    }
    else {
      param_1[0x10] = param_1[0x10] & 0xffffffbf;
    }
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

