/*
 * FUN_0042ca38 at 0042ca38
 * undefined __register FUN_0042ca38(int * param_1, int * param_2)
 * Address ranges: 0042ca38-0042cb2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042ca38(int *param_1,int *param_2)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  
  FUN_004358f8(param_1,param_2);
  FUN_00435824(param_1,(int)param_2,"LISTBOX");
  puVar2 = &DAT_0056f768;
  if ((char)param_1[0x82] != '\0') {
    puVar2 = &DAT_0056f770;
  }
  bVar1 = *(byte *)((int)param_1 + 0x206);
  uVar3 = param_2[1] | 0x300041U | *(uint *)(&DAT_0056f754 + (uint)*(byte *)(param_1 + 0x81) * 4) |
          *(uint *)(&DAT_0056f760 + (uint)*(byte *)((int)param_1 + 0x207) * 4) |
          *(uint *)(puVar2 + (uint)bVar1 * 4) |
          *(uint *)(&DAT_0056f778 + (uint)*(byte *)((int)param_1 + 0x205) * 4) |
          *(uint *)(&DAT_0056f780 + (uint)(param_1[0x7f] != 0) * 4) |
          *(uint *)(&DAT_0056f69c + (uint)*(byte *)(param_1 + 0x7d) * 4) |
          *(uint *)(&DAT_0056f788 + (uint)(param_1[0x83] != 0) * 4);
  param_2[1] = uVar3;
  if (((*PTR_DAT_005722c4 != '\0') && ((char)param_1[0x4e] != '\0')) &&
     ((char)param_1[0x7d] == '\x01')) {
    param_2[1] = param_2[1] & 0xff7fffff;
    param_2[2] = param_2[2] | 0x200;
  }
  uVar3 = FUN_00403270(param_1,uVar3,(uint)bVar1);
  param_2[9] = param_2[9] & ~(*(uint *)(&DAT_0056f790 + (uVar3 & 0x7f) * 4) | 1);
  return;
}

