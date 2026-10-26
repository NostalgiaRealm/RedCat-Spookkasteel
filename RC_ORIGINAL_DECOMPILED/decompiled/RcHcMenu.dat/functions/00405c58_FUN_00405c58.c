/*
 * FUN_00405c58 at 00405c58
 * undefined __register FUN_00405c58(VARIANTARG * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00405c58-00405c7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00405c58(VARIANTARG *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_00404de4(param_1);
  (param_1->n1).n2.vt = 7;
  *(undefined4 *)((int)&param_1->n1 + 8) = param_4;
  *(undefined4 *)((int)&param_1->n1 + 0xc) = param_5;
  return;
}

