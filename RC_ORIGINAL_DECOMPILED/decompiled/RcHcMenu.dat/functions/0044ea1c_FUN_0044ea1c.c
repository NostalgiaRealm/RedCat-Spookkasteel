/*
 * FUN_0044ea1c at 0044ea1c
 * undefined __register FUN_0044ea1c(int * param_1)
 * Address ranges: 0044ea1c-0044ea49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044ea1c(int *param_1)

{
  FUN_0040e444(*(int *)PTR_DAT_005725e4);
  FUN_004191b0((int)param_1);
  FUN_004152b8((int)param_1,(char *)0x0);
  if ((char)param_1[0x12] == '\0') {
    (**(code **)(*param_1 + 0x34))();
  }
  return;
}

