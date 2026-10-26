/*
 * FUN_004357fc at 004357fc
 * undefined __register FUN_004357fc(int param_1, uint param_2)
 * Address ranges: 004357fc-00435821
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004357fc(int param_1,uint param_2)

{
  uint local_10 [4];
  
  local_10[0] = param_2 & 0xffff;
  local_10[1] = 0;
  local_10[2] = 0;
  local_10[3] = 0;
  FUN_004357bc(param_1,(int)local_10);
  return;
}

