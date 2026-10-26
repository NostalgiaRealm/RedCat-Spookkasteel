/*
 * FUN_0045aa40 at 0045aa40
 * undefined FUN_0045aa40(void)
 * Address ranges: 0045aa40-0045ae27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0045aa40(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  float10 fVar4;
  undefined4 *puStack_144;
  undefined1 *puStack_140;
  float fStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  float fStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 *puStack_f8;
  undefined1 uStack_e0;
  undefined1 uStack_df;
  undefined1 uStack_de;
  undefined1 uStack_dd;
  undefined1 uStack_dc;
  undefined1 uStack_db;
  undefined1 uStack_da;
  int iStack_d4;
  undefined1 local_18 [8];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00626f0c;
  pvStack_c = ExceptionList;
  puStack_140 = local_18;
  puStack_144 = (undefined4 *)0x45aa74;
  ExceptionList = &pvStack_c;
  puVar3 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x360) + 0x48))();
  uStack_128 = *puVar3;
  puVar1 = (undefined4 *)(param_1 + 0x3b8);
  uStack_124 = puVar3[1];
  uStack_108 = *puVar1;
  uStack_120 = puVar3[2];
  uStack_104 = *(undefined4 *)(param_1 + 0x3bc);
  puStack_144 = (undefined4 *)&stack0xfffffed0;
  uStack_100 = *(undefined4 *)(param_1 + 0x3c0);
  FUN_004042e0();
  puStack_f8 = (undefined1 *)&puStack_144;
  puStack_8 = (undefined1 *)0x0;
  if (unaff_EBX != 0) {
    *(int *)(unaff_EBX + 0x14) = *(int *)(unaff_EBX + 0x14) + 1;
  }
  FUN_00565c30();
  puStack_8._0_1_ = 1;
  if (*(char *)(param_1 + 0x431) == '\0') {
    puStack_144 = &uStack_128;
    uStack_e0 = 1;
    uStack_df = 1;
    uStack_de = 1;
    uStack_dd = 0;
    uStack_dc = 1;
    uStack_db = 0;
    uStack_da = 1;
    FUN_00565e10(param_1 + 0x434);
    if (*(char *)(param_1 + 0x432) != '\0') {
      puStack_144 = &uStack_128;
      uStack_da = 0;
      cVar2 = FUN_00565e10((undefined4 *)(param_1 + 0x440));
      if (cVar2 == '\0') {
        *puVar1 = *(undefined4 *)(param_1 + 0x440);
        *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(param_1 + 0x444);
        *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_1 + 0x448);
        puStack_8._0_1_ = 4;
        puStack_144 = (undefined4 *)0x45ab70;
        FUN_00514430();
        puStack_8._0_1_ = 3;
        puStack_144 = (undefined4 *)0x45ab84;
        FUN_00514430();
        puStack_8._0_1_ = 2;
        goto joined_r0x0045ac66;
      }
      *(undefined1 *)(param_1 + 0x432) = 0;
      *(undefined1 *)(param_1 + 0x522) = 0;
    }
    puStack_144 = &uStack_108;
    uStack_da = 0;
    cVar2 = FUN_00565e10(&uStack_128);
    if (cVar2 != '\0') {
      if ((*(char *)(param_1 + 0x520) != '\0') && (*(char *)(param_1 + 0x521) != '\0')) {
        puVar3 = (undefined4 *)(param_1 + 0x410);
        puStack_144 = puVar3;
        cVar2 = FUN_00565e10(&uStack_128);
        if (cVar2 == '\0') {
          *(undefined1 *)(param_1 + 0x432) = 1;
          *(undefined1 *)(param_1 + 0x522) = 1;
          *puVar1 = *puVar3;
          *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(param_1 + 0x414);
          *(undefined4 *)(param_1 + 0x440) = *puVar3;
          *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_1 + 0x418);
          *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(param_1 + 0x414);
          *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_1 + 0x418);
          puStack_8._0_1_ = 7;
          puStack_144 = (undefined4 *)0x45ac44;
          FUN_00514430();
          puStack_8._0_1_ = 6;
          puStack_144 = (undefined4 *)0x45ac58;
          FUN_00514430();
          puStack_8._0_1_ = 5;
joined_r0x0045ac66:
          if (iStack_d4 != 0) {
            puStack_144 = (undefined4 *)0x45ad45;
            FUN_004098d0();
            iStack_d4 = 0;
          }
          puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
          puStack_144 = (undefined4 *)0x45ad59;
          FUN_005ab4d0();
          puStack_8 = (undefined1 *)0xffffffff;
          if (unaff_EBX == 0) {
            ExceptionList = pvStack_10;
            return;
          }
          puStack_144 = (undefined4 *)0x45ad75;
          FUN_004098d0();
          ExceptionList = pvStack_10;
          return;
        }
      }
      uStack_118 = 0x3fc90fdb;
      puStack_144 = (undefined4 *)0x45ac86;
      fVar4 = (float10)FUN_004d6960();
      fStack_12c = 10.0;
      fStack_11c = (float)(fVar4 + (float10)3.1415927);
      do {
        puStack_144 = &uStack_fc;
        cVar2 = FUN_0045a600(&fStack_11c,&uStack_118,1,&fStack_12c,&uStack_114);
        if (cVar2 != '\0') {
          *(undefined1 *)(param_1 + 0x432) = 1;
          *puVar1 = uStack_114;
          *(undefined4 *)(param_1 + 0x3bc) = uStack_110;
          *(undefined4 *)(param_1 + 0x3c0) = uStack_10c;
          *(undefined4 *)(param_1 + 0x440) = uStack_114;
          *(undefined4 *)(param_1 + 0x444) = uStack_110;
          *(undefined4 *)(param_1 + 0x448) = uStack_10c;
          puStack_8._0_1_ = 10;
          puStack_144 = (undefined4 *)0x45ad1c;
          FUN_00514430();
          puStack_8._0_1_ = 9;
          puStack_144 = (undefined4 *)0x45ad30;
          FUN_00514430();
          puStack_8._0_1_ = 8;
          goto joined_r0x0045ac66;
        }
        fStack_12c = fStack_12c - 2.0;
      } while (5.0 <= fStack_12c);
    }
    puStack_8._0_1_ = 0xd;
    puStack_144 = (undefined4 *)0x45ad8e;
    FUN_00514430();
    puStack_8._0_1_ = 0xc;
    puStack_144 = (undefined4 *)0x45ada2;
    FUN_00514430();
    puStack_8._0_1_ = 0xb;
  }
  else {
    *(undefined1 *)(param_1 + 0x432) = 0;
    puStack_8._0_1_ = 0x10;
    puStack_144 = (undefined4 *)0x45adc6;
    FUN_00514430();
    puStack_8._0_1_ = 0xf;
    puStack_144 = (undefined4 *)0x45adda;
    FUN_00514430();
    puStack_8._0_1_ = 0xe;
  }
  puStack_144 = (undefined4 *)0x45adeb;
  FUN_0057d310();
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  puStack_144 = (undefined4 *)0x45adfb;
  FUN_005ab4d0();
  puStack_8 = (undefined1 *)0xffffffff;
  puStack_144 = (undefined4 *)0x45ae0f;
  FUN_0057d310();
  ExceptionList = pvStack_10;
  return;
}

