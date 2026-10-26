/*
 * FUN_00429c84 at 00429c84
 * undefined __register FUN_00429c84(int * param_1, undefined4 param_2)
 * Address ranges: 00429c84-00429cb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00429c84(int *param_1,undefined4 param_2)

{
  if ((*PTR_DAT_005722c4 != '\0') && ((char)param_1[0x7d] == '\x01')) {
    FUN_00429b04(param_1);
    FUN_00435de4((int)param_1);
  }
  FUN_00438034((int)param_1,param_2);
  return;
}

