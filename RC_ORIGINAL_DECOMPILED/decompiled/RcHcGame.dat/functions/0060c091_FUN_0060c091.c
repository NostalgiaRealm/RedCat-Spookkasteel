/*
 * FUN_0060c091 at 0060c091
 * undefined FUN_0060c091(void)
 * Address ranges: 0060c091-0060c13f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0060c091(byte *param_1,uint param_2,byte *param_3,undefined4 param_4,undefined *param_5)

{
  byte bVar1;
  undefined *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  puVar2 = param_5;
  if (param_5 == (undefined *)0x0) {
    puVar2 = PTR_PTR_006b2200;
  }
  param_5 = (undefined *)param_2;
  pbVar3 = param_3;
  if (param_2 != 0) {
    do {
      bVar1 = *pbVar3;
      if (bVar1 == 0) break;
      if (bVar1 == 0x25) {
        pbVar4 = pbVar3 + 1;
        bVar1 = *pbVar4;
        if (bVar1 == 0x23) {
          pbVar4 = pbVar3 + 2;
        }
        DAT_00748ec4 = (uint)(bVar1 == 0x23);
        FUN_0060c140(CONCAT31((int3)((uint)&param_1 >> 8),*pbVar4),param_4,&param_1,&param_5,puVar2)
        ;
      }
      else {
        if (((PTR_DAT_006b26b0[(uint)bVar1 * 2 + 1] & 0x80) != 0) && (1 < param_5)) {
          *param_1 = bVar1;
          param_1 = param_1 + 1;
          pbVar3 = pbVar3 + 1;
          param_5 = (undefined *)((int)param_5 - 1);
        }
        *param_1 = *pbVar3;
        param_1 = param_1 + 1;
        param_5 = (undefined *)((int)param_5 - 1);
        pbVar4 = pbVar3;
      }
      pbVar3 = pbVar4 + 1;
    } while (param_5 != (undefined *)0x0);
    if (param_5 != (undefined *)0x0) {
      *param_1 = 0;
      return param_2 - (int)param_5;
    }
  }
  return 0;
}

