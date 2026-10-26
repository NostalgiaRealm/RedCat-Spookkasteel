/*
 * FUN_004aff74 at 004aff74
 * undefined __register FUN_004aff74(int * param_1, int param_2, char param_3)
 * Address ranges: 004aff74-004affae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004aff74(int *param_1,int param_2,char param_3)

{
  FUN_00431ce8(param_1,param_2,param_3);
  if (((char)param_1[0x7e] != '\0') && (param_3 == '\x01')) {
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

