/*
 * FUN_0041cfec at 0041cfec
 * undefined __register FUN_0041cfec(int * param_1, int param_2)
 * Address ranges: 0041cfec-0041d03f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041cfec(int *param_1,int param_2)

{
  tagPOINT local_10;
  
  if (param_2 != param_1[1]) {
    if (param_1[1] != 0) {
      FUN_0041cf8c((int)param_1);
      FUN_0041ce90(param_1,&local_10);
      param_1[6] = local_10.x;
      param_1[7] = local_10.y;
      param_1[1] = 0;
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
    }
    if (param_2 != 0) {
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
      param_1[1] = param_2;
      FUN_0041ceb4(param_1,param_1 + 6);
    }
  }
  return;
}

