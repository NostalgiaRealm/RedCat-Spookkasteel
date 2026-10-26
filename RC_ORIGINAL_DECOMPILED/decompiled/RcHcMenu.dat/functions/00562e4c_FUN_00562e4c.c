/*
 * FUN_00562e4c at 00562e4c
 * undefined __register FUN_00562e4c(int * param_1)
 * Address ranges: 00562e4c-00562f5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00562e4c(int *param_1)

{
  int iVar1;
  int iVar2;
  MCIERROR MVar3;
  int local_14;
  int local_10;
  int local_c;
  
  FUN_00562a04((int)param_1);
  if (*(char *)((int)param_1 + 0x306) != '\0') {
    iVar1 = FUN_00563d68((int)param_1);
    iVar2 = FUN_00563c94((int)param_1);
    if (((iVar1 == iVar2) && ((char)param_1[0xb6] == '\0')) &&
       (*(char *)((int)param_1 + 0x2d9) == '\0')) {
      FUN_005637f4((int)param_1);
    }
  }
  param_1[0xb4] = 0;
  if (*(char *)((int)param_1 + 0x2d7) == '\0') {
    param_1[0xb4] = 1;
  }
  else {
    if (*(char *)((int)param_1 + 0x2d5) != '\0') {
      param_1[0xb4] = 1;
    }
    *(undefined1 *)((int)param_1 + 0x2d7) = 0;
  }
  if (*(char *)((int)param_1 + 0x2d6) != '\0') {
    if ((char)param_1[0xb5] != '\0') {
      param_1[0xb4] = param_1[0xb4] | 2;
    }
    *(undefined1 *)((int)param_1 + 0x2d6) = 0;
  }
  if ((char)param_1[0xb6] != '\0') {
    param_1[0xb4] = param_1[0xb4] | 4;
    local_10 = param_1[0xb9];
    *(undefined1 *)(param_1 + 0xb6) = 0;
  }
  if (*(char *)((int)param_1 + 0x2d9) != '\0') {
    param_1[0xb4] = param_1[0xb4] | 8;
    local_c = param_1[0xb8];
    *(undefined1 *)((int)param_1 + 0x2d9) = 0;
  }
  local_14 = FUN_00438988(param_1);
  MVar3 = mciSendCommandA((uint)*(ushort *)((int)param_1 + 0x2da),0x806,param_1[0xb4],
                          (DWORD_PTR)&local_14);
  param_1[0xbb] = MVar3;
  return;
}

