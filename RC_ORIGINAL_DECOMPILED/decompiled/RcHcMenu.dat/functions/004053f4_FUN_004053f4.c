/*
 * FUN_004053f4 at 004053f4
 * undefined __register FUN_004053f4(VARIANTARG * param_1, char param_2)
 * Address ranges: 004053f4-00405410
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004053f4(VARIANTARG *param_1,char param_2)

{
  if (7 < (param_1->n1).n2.vt) {
    FUN_00404de4(param_1);
  }
  (param_1->n1).n2.vt = 0xb;
  *(ushort *)((int)&param_1->n1 + 8) = -(ushort)(param_2 != '\0');
  return;
}

