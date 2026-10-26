/*
 * FUN_004234b4 at 004234b4
 * undefined __register FUN_004234b4(int param_1, int * param_2, char param_3)
 * Address ranges: 004234b4-004234dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004234b4(int param_1,int *param_2,char param_3)

{
  if ((*(char *)(param_1 + 0x10) != '\0') && (param_3 == '\x02')) {
    FUN_00403094(param_2);
  }
  FUN_004126c8();
  return;
}

