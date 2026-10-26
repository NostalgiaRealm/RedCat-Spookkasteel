/*
 * FUN_004e204c at 004e204c
 * undefined __register FUN_004e204c(int * param_1, int * param_2)
 * Address ranges: 004e204c-004e2120
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e204c(int *param_1,int *param_2)

{
  int local_24 [2];
  int local_1c [2];
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_c = param_2;
  local_8 = param_1;
  if (*(byte *)(param_1 + 0xba) < 2) {
    if ((*(char *)((int)param_1 + 0x47) != '\0') && (param_1[0xbc] != param_1[0xbb])) {
      FUN_004e15ec(param_1,param_2);
      local_8[0xbb] = local_8[0xbc];
      (**(code **)(*local_8 + 0x74))();
    }
  }
  else if (*(char *)((int)param_1 + 0x47) != '\0') {
    FUN_0041160c(0,0,local_1c);
    FUN_0043228c(local_c,local_1c,&local_14);
    if (local_10 == local_8[0xbf]) {
      FUN_0041160c(0,0,local_24);
      FUN_0043228c(local_c,local_24,local_1c);
      if (local_1c[0] == local_8[0xbe]) {
        return;
      }
    }
    FUN_004e15ec(local_8,local_c);
    (**(code **)(*local_8 + 0x74))();
  }
  return;
}

