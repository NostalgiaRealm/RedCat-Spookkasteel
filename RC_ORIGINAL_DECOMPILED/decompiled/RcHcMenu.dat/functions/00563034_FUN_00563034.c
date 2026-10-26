/*
 * FUN_00563034 at 00563034
 * undefined __register FUN_00563034(int * param_1, undefined4 param_2, int param_3)
 * Address ranges: 00563034-005630c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00563034(int *param_1,undefined4 param_2,int param_3)

{
  MCIERROR MVar1;
  int local_8;
  
  local_8 = param_3;
  FUN_00562a04((int)param_1);
  param_1[0xb4] = 0;
  if (*(char *)((int)param_1 + 0x2d6) == '\0') {
    param_1[0xb4] = 2;
  }
  else {
    if ((char)param_1[0xb5] != '\0') {
      param_1[0xb4] = 2;
    }
    *(undefined1 *)((int)param_1 + 0x2d6) = 0;
  }
  if (*(char *)((int)param_1 + 0x2d7) != '\0') {
    if (*(char *)((int)param_1 + 0x2d5) != '\0') {
      param_1[0xb4] = param_1[0xb4] | 1;
    }
    *(undefined1 *)((int)param_1 + 0x2d7) = 0;
  }
  local_8 = FUN_00438988(param_1);
  MVar1 = mciSendCommandA((uint)*(ushort *)((int)param_1 + 0x2da),0x808,param_1[0xb4],
                          (DWORD_PTR)&local_8);
  param_1[0xbb] = MVar1;
  return;
}

