/*
 * FUN_0061f268 at 0061f268
 * undefined FUN_0061f268(void)
 * Address ranges: 0061f268-0061f2e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0061f268(undefined2 *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  undefined4 uStack_8;
  
  iVar3 = 0x6b3c50;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      iVar3 = 0x6b3db0;
    }
    if (param_3 == 0) {
      *param_1 = 0;
    }
    while (param_2 != 0) {
      iVar3 = iVar3 + 0x54;
      uVar1 = (int)param_2 >> 3;
      uVar2 = param_2 & 7;
      param_2 = uVar1;
      if (uVar2 != 0) {
        puVar4 = (undefined4 *)(iVar3 + uVar2 * 0xc);
        if (0x7fff < *(ushort *)(iVar3 + uVar2 * 0xc)) {
          local_10 = (undefined2)*puVar4;
          local_e._0_2_ = (undefined2)((uint)*puVar4 >> 0x10);
          local_e._2_2_ = (undefined2)puVar4[1];
          uStack_a = (undefined2)((uint)puVar4[1] >> 0x10);
          uStack_8 = puVar4[2];
          local_e = CONCAT22(local_e._2_2_,(undefined2)local_e) + -1;
          puVar4 = (undefined4 *)&local_10;
        }
        FUN_0061f048(param_1,puVar4);
      }
    }
  }
  return;
}

