/*
 * FUN_00429918 at 00429918
 * undefined __register FUN_00429918(int * param_1, int * param_2)
 * Address ranges: 00429918-004299cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00429918(int *param_1,int *param_2)

{
  FUN_004358f8(param_1,param_2);
  FUN_00435824(param_1,(int)param_2,"EDIT");
  param_2[1] = param_2[1] | 0xc0U | *(uint *)(&DAT_0056f69c + (uint)*(byte *)(param_1 + 0x7d) * 4) |
               *(uint *)(&DAT_0056f6b4 + (uint)(*(char *)((int)param_1 + 0x1f5) != '\0') * 4) |
               *(uint *)(&DAT_0056f6bc + (uint)*(byte *)((int)param_1 + 0x1f6) * 4) |
               *(uint *)(&DAT_0056f6c4 + (uint)*(byte *)((int)param_1 + 0x1fb) * 4) |
               *(uint *)(&DAT_0056f6d0 + (uint)*(byte *)((int)param_1 + 0x1f9) * 4) |
               *(uint *)(&DAT_0056f6d8 + (uint)*(byte *)((int)param_1 + 0x1fa) * 4);
  if (((*PTR_DAT_005722c4 != '\0') && ((char)param_1[0x4e] != '\0')) &&
     ((char)param_1[0x7d] == '\x01')) {
    param_2[1] = param_2[1] & 0xff7fffff;
    param_2[2] = param_2[2] | 0x200;
  }
  return;
}

