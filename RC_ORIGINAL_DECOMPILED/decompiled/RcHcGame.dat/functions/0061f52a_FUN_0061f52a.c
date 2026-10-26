/*
 * FUN_0061f52a at 0061f52a
 * undefined FUN_0061f52a(void)
 * Address ranges: 0061f52a-0061f59f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0061f52a(uint param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  
  if (param_1 < DAT_00747c60) {
    bVar1 = *(byte *)((&DAT_00747b60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8);
    if ((bVar1 & 1) != 0) {
      if (param_2 == 0x8000) {
        bVar2 = bVar1 & 0x7f;
      }
      else {
        if (param_2 != 0x4000) {
          DAT_0070ff98 = 0x16;
          return -1;
        }
        bVar2 = bVar1 | 0x80;
      }
      *(byte *)((&DAT_00747b60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) = bVar2;
      return (-(uint)((bVar1 & 0x80) != 0) & 0xffffc000) + 0x8000;
    }
  }
  DAT_0070ff98 = 9;
  return -1;
}

