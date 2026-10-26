/*
 * FUN_100014d0 at 100014d0
 * undefined4 __cdecl FUN_100014d0(int param_1)
 * Address ranges: 100014d0-10001623
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_100014d0(int param_1)

{
  void *pvVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *local_4;
  
  FUN_10001320(param_1);
  FUN_10002040(*(int *)(param_1 + 0x100));
  do {
    iVar6 = 0;
    iVar7 = param_1 + 0x104;
    local_4 = (int *)0x0;
    do {
      piVar3 = local_4;
      if ((0 < *(int *)(iVar7 + 0x34)) && (*(int *)(iVar7 + 0x38) < *(int *)(iVar7 + 0x34))) {
        if (*(int *)(iVar7 + 0x30) == 0) {
          pvVar1 = _malloc(*(int *)(iVar7 + 0x34) * 0x3c);
          *(void **)(iVar7 + 0x30) = pvVar1;
          if (pvVar1 == (void *)0x0) {
            return 0;
          }
          puVar8 = *(undefined4 **)(iVar7 + 0x30);
          for (uVar4 = *(int *)(iVar7 + 0x34) * 0xf & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined1 *)puVar8 = 0;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
        }
        uVar4 = grTexTextureMemRequired(3,iVar7);
        uVar2 = FUN_10001fb0(*(int *)(param_1 + 0x100));
        if (uVar2 < uVar4) break;
        iVar5 = *(int *)(iVar7 + 0x38);
        *(int *)(iVar7 + 0x38) = iVar5 + 1;
        piVar3 = (int *)(*(int *)(iVar7 + 0x30) + iVar5 * 0x14);
        piVar3[4] = (int)piVar3;
        *piVar3 = iVar7;
        iVar5 = FUN_10001fc0(*(int *)(param_1 + 0x100),uVar4,piVar3 + 1);
        if (iVar5 == 0) {
          *(int *)(iVar7 + 0x38) = *(int *)(iVar7 + 0x38) + -1;
          break;
        }
      }
      local_4 = piVar3;
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x3c;
    } while (iVar6 < 0x80);
    if (local_4 == (int *)0x0) {
      iVar6 = 0;
      piVar3 = (int *)(param_1 + 0x13c);
      while ((piVar3[-1] < 1 || (0 < *piVar3))) {
        iVar6 = iVar6 + 1;
        piVar3 = piVar3 + 0xf;
        if (0x7f < iVar6) {
          iVar6 = FUN_10001370(param_1,s_GCache_Log_1000e18c,DAT_10011898);
          if (iVar6 == 0) {
            return 0;
          }
          DAT_10011898 = 1;
          return 1;
        }
      }
      return 0;
    }
  } while( true );
}

