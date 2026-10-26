/*
 * FUN_0046b068 at 0046b068
 * undefined __register FUN_0046b068(int param_1, undefined4 param_2, undefined4 param_3, uint param_4, int param_5, uint param_6, int param_7, uint param_8, int param_9)
 * Address ranges: 0046b068-0046b0bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046b068(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
                 uint param_6,int param_7,uint param_8,int param_9)

{
  if (param_9 == param_7) {
    if (param_8 < param_6) goto LAB_0046b095;
  }
  else if (param_9 < param_7) goto LAB_0046b095;
  if (param_9 == param_5) {
    if (param_8 <= param_4) {
      return;
    }
  }
  else if (param_9 <= param_5) {
    return;
  }
LAB_0046b095:
  FUN_0046aa44(param_1);
  return;
}

