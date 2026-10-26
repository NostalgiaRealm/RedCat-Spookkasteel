/*
 * FUN_00488aa8 at 00488aa8
 * undefined __register FUN_00488aa8(int * param_1, uint param_2, char param_3)
 * Address ranges: 00488aa8-00488b45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00488aa8(int *param_1,uint param_2,char param_3)

{
  short sVar1;
  undefined4 extraout_ECX;
  bool bVar2;
  byte local_2c [32];
  
  if (param_3 == '\0') {
    FUN_00402ea4((undefined1 *)((int)param_1 + 0x229),local_2c,0x200);
    bVar2 = param_2 == 0xff;
    if (param_2 < 0x100) {
      local_2c[(int)param_2 >> 3] = local_2c[(int)param_2 >> 3] & ~('\x01' << (param_2 & 7));
    }
    FUN_00402e90((char *)local_2c,"",CONCAT31((int3)((uint)extraout_ECX >> 8),0x20));
    if (bVar2) {
      FUN_004886f0(param_1,'\0');
    }
    FUN_00487850((int)param_1,param_2,'\0');
  }
  else {
    sVar1 = *(short *)((int)param_1 + 0x229);
    FUN_00487850((int)param_1,param_2,param_3);
    if ((*(byte *)(param_1 + 8) & 2) == 0 && sVar1 == 0) {
      *(byte *)(param_1 + 0x93) = *(byte *)(param_1[0x8b] + 0x66) ^ 1;
    }
  }
  return;
}

