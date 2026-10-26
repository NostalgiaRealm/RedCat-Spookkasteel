/* Ghidra-generated C-like pseudocode for inspection. Not original source and not a buildable reconstruction. */
/*
 * FUN_10001000 at 10001000
 * bool __cdecl FUN_10001000(int param_1, LPCSTR param_2)
 * Address ranges: 10001000-100010f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool __cdecl FUN_10001000(int param_1,LPCSTR param_2)

{
  ushort uVar1;
  FILE *pFVar2;
  uint uVar3;
  char *pcVar4;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  int local_784;
  char local_780 [1920];
  
  pFVar2 = (FILE *)FUN_10003f39(param_2,&DAT_1000e06c);
  if (pFVar2 == (FILE *)0x0) {
    return false;
  }
  uVar3 = FUN_10003dcf(s_BM___1000e030,0xe,1,(int *)pFVar2);
  if (uVar3 != 1) {
    return false;
  }
  uVar3 = FUN_10003dcf(&DAT_1000e040,0x2c,1,(int *)pFVar2);
  if (uVar3 != 1) {
    return false;
  }
  puVar6 = (ushort *)(param_1 + 0x95b00);
  local_784 = 0x1e0;
  do {
    pcVar4 = local_780;
    iVar7 = 0x280;
    puVar5 = puVar6;
    do {
      uVar1 = *puVar5;
      *pcVar4 = (char)*puVar5 << 3;
      puVar5 = puVar5 + 1;
      pcVar4[1] = (char)(uVar1 >> 5) << 2;
      pcVar4[2] = (byte)(uVar1 >> 8) & 0xf8;
      pcVar4 = pcVar4 + 3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    FUN_10003dcf(local_780,0x780,1,(int *)pFVar2);
    puVar6 = puVar6 + -0x280;
    local_784 = local_784 + -1;
  } while (local_784 != 0);
  iVar7 = FUN_10003d52(pFVar2);
  return (bool)('\x01' - (iVar7 != 0));
}


/*
 * FUN_10001110 at 10001110
 * char * __cdecl FUN_10001110(char * param_1, undefined4 param_2)
 * Address ranges: 10001110-1000118b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char * __cdecl FUN_10001110(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar2 = _malloc(0x1f0c);
  if (pcVar2 == (char *)0x0) {
    return (char *)0x0;
  }
  pcVar6 = pcVar2;
  for (iVar3 = 0x7c3; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar6 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  pcVar7 = pcVar2;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  pcVar2[0x1f04] = -1;
  pcVar2[0x1f05] = -1;
  pcVar2[0x1f06] = -1;
  pcVar2[0x1f07] = -1;
  *(undefined4 *)(pcVar2 + 0x100) = param_2;
  *(char **)(pcVar2 + 0x1f08) = pcVar2;
  iVar3 = FUN_10001190((int)pcVar2);
  if (iVar3 == 0) {
    FUN_10003f4c(pcVar2);
    return (char *)0x0;
  }
  return pcVar2;
}


/*
 * FUN_10001190 at 10001190
 * undefined4 __cdecl FUN_10001190(int param_1)
 * Address ranges: 10001190-100011b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10001190(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_10001320(param_1);
  puVar2 = (undefined4 *)(param_1 + 0x104);
  for (iVar1 = 0x780; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return 1;
}


/*
 * FUN_100011c0 at 100011c0
 * int * __cdecl FUN_100011c0(int param_1, int * param_2)
 * Address ranges: 100011c0-1000120e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * __cdecl FUN_100011c0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x104);
  iVar2 = 0;
  while ((((piVar1[0xd] == 0 || (*param_2 != *piVar1)) || (param_2[1] != piVar1[1])) ||
         ((param_2[2] != piVar1[2] || (param_2[3] != piVar1[3]))))) {
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 0xf;
    if (0x7f < iVar2) {
      return (int *)0x0;
    }
  }
  return piVar1;
}


/*
 * FUN_10001210 at 10001210
 * undefined4 * __cdecl FUN_10001210(int param_1, undefined4 param_2, undefined4 param_3, undefined1 param_4, undefined4 * param_5)
 * Address ranges: 10001210-1000127e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * __cdecl
FUN_10001210(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar3 = (undefined4 *)(param_1 + 0x104);
  iVar1 = 0;
  do {
    if (puVar3[0xd] == 0) break;
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 0xf;
  } while (iVar1 < 0x80);
  if (iVar1 == 0x80) {
    return (undefined4 *)0x0;
  }
  puVar4 = param_5;
  puVar5 = puVar3;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3[6] = param_2;
  puVar3[4] = 0;
  puVar3[7] = param_3;
  *(undefined1 *)(puVar3 + 8) = param_4;
  uVar2 = grTexTextureMemRequired(3,param_5);
  puVar3[9] = uVar2;
  puVar3[0xd] = puVar3[0xd] + 1;
  return puVar3;
}


/*
 * FUN_10001280 at 10001280
 * undefined4 __cdecl FUN_10001280(int param_1, int param_2, undefined4 param_3)
 * Address ranges: 10001280-100012ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10001280(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar3 = 3;
  uVar1 = FUN_100016a0(*(undefined4 **)(param_1 + 0x100));
  grTexDownloadMipMap(uVar1,uVar2,uVar3,param_3);
  return 1;
}


/*
 * FUN_100012b0 at 100012b0
 * undefined __cdecl FUN_100012b0(int param_1, undefined4 param_2, undefined4 param_3, undefined1 param_4, int * param_5)
 * Address ranges: 100012b0-100012ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl
FUN_100012b0(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,int *param_5)

{
  int *piVar1;
  
  piVar1 = FUN_100011c0(param_1,param_5);
  if (piVar1 != (int *)0x0) {
    piVar1[0xd] = piVar1[0xd] + 1;
    return;
  }
  FUN_10001210(param_1,param_2,param_3,param_4,param_5);
  return;
}


/*
 * FUN_100012f0 at 100012f0
 * undefined __cdecl FUN_100012f0(int param_1)
 * Address ranges: 100012f0-1000131d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100012f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34) + -1;
  *(int *)(param_1 + 0x34) = iVar1;
  if (iVar1 == 0) {
    if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
      FUN_10003f4c(*(undefined **)(param_1 + 0x30));
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}


/*
 * FUN_10001320 at 10001320
 * undefined4 __cdecl FUN_10001320(int param_1)
 * Address ranges: 10001320-10001361
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10001320(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x80;
  puVar1 = (undefined4 *)(param_1 + 0x134);
  do {
    if (puVar1[1] != 0) {
      if ((undefined *)*puVar1 != (undefined *)0x0) {
        FUN_10003f4c((undefined *)*puVar1);
      }
      *puVar1 = 0;
      puVar1[2] = 0;
    }
    puVar1 = puVar1 + 0xf;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 1;
}


/*
 * FUN_10001370 at 10001370
 * undefined4 __cdecl FUN_10001370(int param_1, LPCSTR param_2, int param_3)
 * Address ranges: 10001370-100014c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10001370(int param_1,LPCSTR param_2,int param_3)

{
  FILE *pFVar1;
  int *piVar2;
  char *pcVar3;
  _SYSTEMTIME local_10;
  
  if (param_3 == 0) {
    pcVar3 = &DAT_1000e184;
  }
  else {
    pcVar3 = &DAT_1000e188;
  }
  pFVar1 = (FILE *)FUN_10003f39(param_2,pcVar3);
  if (pFVar1 == (FILE *)0x0) {
    return 0;
  }
  GetSystemTime(&local_10);
  FUN_1000416f((int *)pFVar1,(byte *)s__________________________________1000e148);
  FUN_1000416f((int *)pFVar1,(byte *)s_Date___i__i__i__Time___i__i_1000e128);
  FUN_1000416f((int *)pFVar1,(byte *)s_Cache_Name___s_1000e118);
  FUN_10001fa0(*(int *)(param_1 + 0x100));
  FUN_1000416f((int *)pFVar1,(byte *)s_Total_Memory_for_Cache___6i_1000e0f8);
  FUN_10001fb0(*(int *)(param_1 + 0x100));
  FUN_1000416f((int *)pFVar1,(byte *)s_Free_Memory_for_Cache___6i_1000e0dc);
  FUN_1000416f((int *)pFVar1,(byte *)s_____Slots_____1000e0cc);
  piVar2 = (int *)(param_1 + 0x138);
  param_2 = (LPCSTR)0x80;
  do {
    if (*piVar2 != 0) {
      FUN_1000416f((int *)pFVar1,(byte *)s_Width___3i__Height__3i__Mips___2_1000e094);
    }
    piVar2 = piVar2 + 0xf;
    param_2 = param_2 + -1;
  } while (param_2 != (LPCSTR)0x0);
  FUN_1000416f((int *)pFVar1,(byte *)s_Total_Ref___4i__Total_Used___4i_1000e070);
  FUN_10003d52(pFVar1);
  return 1;
}


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


/*
 * FUN_10001630 at 10001630
 * undefined4 __cdecl FUN_10001630(int param_1)
 * Address ranges: 10001630-10001637
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10001630(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/*
 * FUN_10001640 at 10001640
 * undefined __cdecl FUN_10001640(int param_1)
 * Address ranges: 10001640-10001678
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10001640(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  iVar4 = *(int *)(param_1 + 0x38);
  uVar3 = *(uint *)(iVar1 + 8);
  iVar2 = iVar1;
  if (0 < iVar4) {
    do {
      if (*(uint *)(iVar2 + 8) < uVar3) {
        iVar1 = iVar2;
        uVar3 = *(uint *)(iVar2 + 8);
      }
      iVar4 = iVar4 + -1;
      iVar2 = iVar2 + 0x14;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  return;
}


/*
 * FUN_10001680 at 10001680
 * undefined __cdecl FUN_10001680(int param_1, undefined4 param_2)
 * Address ranges: 10001680-1000168b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10001680(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}


/*
 * FUN_10001690 at 10001690
 * undefined4 __cdecl FUN_10001690(int param_1)
 * Address ranges: 10001690-10001697
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10001690(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


/*
 * FUN_100016a0 at 100016a0
 * undefined4 __cdecl FUN_100016a0(undefined4 * param_1)
 * Address ranges: 100016a0-100016a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_100016a0(undefined4 *param_1)

{
  return *param_1;
}


/*
 * FUN_100016b0 at 100016b0
 * undefined __cdecl FUN_100016b0(int * param_1, int param_2)
 * Address ranges: 100016b0-1000171f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100016b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != param_1[2]) {
    if (param_2 == DAT_100e3e14) {
      iVar1 = *param_1;
      iVar2 = *(int *)(iVar1 + 0x1c) * *(int *)(iVar1 + 0x18);
      if (1 < *(byte *)(iVar1 + 0x20)) {
        iVar3 = *(byte *)(iVar1 + 0x20) - 1;
        iVar1 = iVar2;
        do {
          iVar1 = iVar1 >> 2;
          iVar2 = iVar2 + iVar1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if (DAT_101f5720 != DAT_100e3e14) {
        DAT_101f5720 = DAT_100e3e14;
        DAT_101f5724 = iVar2 * 2;
        param_1[2] = param_2;
        return;
      }
      DAT_101f5724 = DAT_101f5724 + iVar2 * 2;
    }
    param_1[2] = param_2;
  }
  return;
}


/*
 * FUN_10001890 at 10001890
 * undefined4 __fastcall FUN_10001890(undefined * param_1, undefined4 param_2)
 * Address ranges: 10001890-100018ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __fastcall FUN_10001890(undefined *param_1,undefined4 param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)&DAT_1000e198;
  do {
    iVar1 = (*(code *)param_1)(ppuVar2,param_2);
    if (iVar1 == 0) {
      return 1;
    }
    ppuVar2 = ppuVar2 + 2;
  } while (ppuVar2 < &PTR_s_Glide_driver__v100_3__Copyright_1_1000e1d8);
  return 1;
}


/*
 * DriverHook at 100018d0
 * undefined4 __cdecl DriverHook(undefined4 * param_1)
 * Address ranges: 100018d0-10001916
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl DriverHook(undefined4 *param_1)

{
                    /* 0x18d0  1  DriverHook */
  _DAT_101f5710 = 3;
  _DAT_101f5714 = 0;
  _DAT_1000e280 = &DAT_101f5710;
  *param_1 = &PTR_s_Glide_driver__v100_3__Copyright_1_1000e1d8;
  _DAT_1000e1e8 = &DAT_101f5600;
  FUN_10001920(0,s_GLIDE_DRV__No_error__1000e320);
  return 1;
}


/*
 * FUN_10001920 at 10001920
 * undefined __cdecl FUN_10001920(undefined4 param_1, char * param_2)
 * Address ranges: 10001920-1000197f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10001920(undefined4 param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  _DAT_101f5700 = param_1;
  if (param_2 == (char *)0x0) {
    DAT_101f5600._0_1_ = 0;
    _DAT_1000e1e8 = &DAT_101f5600;
    _DAT_1000e1e4 = param_1;
    return;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar4 = param_2;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)&DAT_101f5600;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  _DAT_1000e1e8 = &DAT_101f5600;
  _DAT_1000e1e4 = param_1;
  return;
}


/*
 * FUN_10001980 at 10001980
 * undefined4 __cdecl FUN_10001980(int param_1)
 * Address ranges: 10001980-10001bb2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10001980(int param_1)

{
  HWND hWnd;
  int iVar1;
  undefined4 uVar2;
  tagRECT *lpRect;
  tagRECT local_10;
  
  switch(*(undefined4 *)(param_1 + 0x404)) {
  case 0:
    DAT_101f5568 = 0x200;
    DAT_101f556c = 0x180;
    uVar2 = 3;
    break;
  case 1:
    DAT_101f5568 = 0x280;
    DAT_101f556c = 0x1e0;
    uVar2 = 7;
    break;
  case 2:
    DAT_101f5568 = 800;
    DAT_101f556c = 600;
    uVar2 = 8;
    break;
  case 3:
    DAT_101f5568 = 0x400;
    DAT_101f556c = 0x300;
    uVar2 = 0xc;
    break;
  default:
    FUN_10001920(2,s_GLIDE_DrvInit__Invalid_display_m_1000e33c);
    return 0;
  }
  DAT_101f5560 = *(HWND *)(param_1 + 0x610);
  GetWindowRect(DAT_101f5560,(LPRECT)&DAT_100118e0);
  lpRect = &local_10;
  hWnd = GetDesktopWindow();
  GetWindowRect(hWnd,lpRect);
  MoveWindow(DAT_101f5560,local_10.left + -4,local_10.top + -0x28,local_10.right + 0x14,
             local_10.bottom + 0x14,1);
  SetCursorPos(DAT_101f5568 / 2,DAT_101f556c / 2);
  _grGlideInit_0();
  iVar1 = FUN_10001c10();
  if (iVar1 == 0) {
    return 0;
  }
  if (DAT_101f55c4 < 1) {
    FUN_10001920(3,s_GLIDE_DrvInit__Not_enough_textur_1000e408);
    return 0;
  }
  _grSstSelect_4(0);
  iVar1 = _grSstWinOpen_28(DAT_101f5560,uVar2,0,1,0,2,1);
  if (iVar1 != 0) {
    _DAT_101f5578 = 0xb;
    _DAT_101f557c = 5;
    _DAT_101f5580 = 0;
    _DAT_101f5584 = 0xf800;
    _DAT_101f5588 = 0x7e0;
    _DAT_101f558c = 0x1f;
    _DAT_101f5590 = 5;
    _DAT_101f5594 = 6;
    _DAT_101f5598 = 5;
    FUN_10001920(0,s_GMain_Startup__No_error__1000e3c4);
    iVar1 = FUN_100020a0();
    if (iVar1 == 0) {
      FUN_10001920(7,s_GMain_Startup__GTHandle_Startup_f_1000e398);
      return 0;
    }
    iVar1 = FUN_10001cc0();
    if (iVar1 == 0) {
      FUN_10001920(7,s_GMain_Startup__GMain_InitGlideRe_1000e364);
      return 0;
    }
    _grGammaCorrectionValue_4(0x3f800000);
    return 1;
  }
  FUN_10001920(3,s_GLIDE_DrvInit__grSstWinOpen_fail_1000e3e0);
  return 0;
}


/*
 * FUN_10001bd0 at 10001bd0
 * undefined __stdcall FUN_10001bd0(void)
 * Address ranges: 10001bd0-10001c02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10001bd0(void)

{
  FUN_100021e0();
  MoveWindow(DAT_101f5560,DAT_100118e0,DAT_100118e4,DAT_100118e8,DAT_100118ec,1);
  _grGlideShutdown_0();
  return;
}


/*
 * FUN_10001c10 at 10001c10
 * undefined4 __stdcall FUN_10001c10(void)
 * Address ranges: 10001c10-10001ca9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10001c10(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_retaddr;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  
  iVar1 = _grSstQueryHardware_4(&local_94);
  if (iVar1 != 0) {
    puVar2 = unaff_retaddr;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    switch(local_94) {
    case 0:
    case 3:
      *unaff_retaddr = uStack_90;
      unaff_retaddr[1] = uStack_88;
      break;
    case 1:
      unaff_retaddr[1] = uStack_8c;
      *unaff_retaddr = uStack_90;
      return 1;
    case 2:
      FUN_10001920(7,s_GMain_GetBoardInfo__GR_SSTTYPE_A_1000e43c);
      return 0;
    }
    return 1;
  }
  FUN_10001920(7,s_GMain_GetBoardInfo__grSstQueryHa_1000e470);
  return 0;
}


/*
 * FUN_10001cc0 at 10001cc0
 * undefined4 __stdcall FUN_10001cc0(void)
 * Address ranges: 10001cc0-10001e17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10001cc0(void)

{
  _grDepthBufferMode_4(1);
  _grDepthBufferFunction_4(6);
  _grDepthMask_4(1);
  _grChromakeyMode_4(0);
  _grChromakeyValue_4(1);
  _grTexDetailControl_16(DAT_101f55a0,0,1,0x3f800000);
  _grTexLodBiasValue_8(DAT_101f55a0,0xbf800000);
  _guColorCombineFunction_4(4);
  _guTexCombineFunction_8(DAT_101f55a0,1);
  _grTexFilterMode_12(DAT_101f55a0,1,1);
  _grTexClampMode_12(DAT_101f55a0,0,0);
  _grTexCombine_28(DAT_101f55a0,1,0,1,0,0,0);
  _grColorCombine_20(3,1,0,1,0);
  _grAlphaCombine_20(3,3,0,1,0);
  if (1 < DAT_101f55c4) {
    _grTexDetailControl_16(DAT_101f55a4,0,1,0x3e99999a);
    _grTexLodBiasValue_8(DAT_101f55a4,0x3e99999a);
    _guTexCombineFunction_8(DAT_101f55a4,1);
    _grTexFilterMode_12(DAT_101f55a4,1,1);
    _grTexClampMode_12(DAT_101f55a4,1,1);
    _grTexCombine_28(DAT_101f55a4,3,1,3,1,0,0);
    _grTexClampMode_12(DAT_101f55a4,1,1);
    _grHints_8(0,0x14);
  }
  FUN_10001eb0((void *)0x0,0,0,0);
  return 1;
}


/*
 * FUN_10001e50 at 10001e50
 * undefined4 __fastcall FUN_10001e50(LPCSTR param_1)
 * Address ranges: 10001e50-10001ead
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __fastcall FUN_10001e50(LPCSTR param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = _malloc(0x12c000);
  iVar2 = grLfbReadRegion(0,0,0,0x280,0x1e0,0x500,puVar1);
  if (iVar2 == 0) {
    FUN_10001920(7,s_GLIDE__Could_not_save_BMP__1000e4a0);
    return 0;
  }
  FUN_10001000((int)puVar1,param_1);
  FUN_10003f4c(puVar1);
  return 1;
}


/*
 * FUN_10001eb0 at 10001eb0
 * undefined4 __thiscall FUN_10001eb0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10001eb0-10001f40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_10001eb0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  _DAT_101f5540 = param_1;
  _DAT_101f553c = param_2;
  _DAT_101f5538 = param_3;
  DAT_1000e338 = this;
  if (this != (void *)0x0) {
    _grFogMode_4(2);
    lVar1 = __ftol();
    lVar2 = __ftol();
    lVar3 = __ftol();
    _grFogColorValue_4(((int)lVar1 << 8 | (uint)lVar2) << 8 | (uint)lVar3);
    _guFogGenerateLinear_12(&DAT_100118a0,param_2,param_3);
    _grFogTable_4(&DAT_100118a0);
    return 1;
  }
  _grFogMode_4(0);
  return 1;
}


/*
 * FUN_10001f50 at 10001f50
 * undefined __cdecl FUN_10001f50(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10001f50-10001f85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10001f50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = _malloc(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = param_1;
  puVar1[2] = param_3;
  puVar1[1] = param_2;
  puVar1[3] = param_2;
  return;
}


/*
 * FUN_10001f90 at 10001f90
 * undefined __cdecl FUN_10001f90(undefined * param_1)
 * Address ranges: 10001f90-10001f9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10001f90(undefined *param_1)

{
  FUN_10003f4c(param_1);
  return;
}


/*
 * FUN_10001fa0 at 10001fa0
 * int __cdecl FUN_10001fa0(int param_1)
 * Address ranges: 10001fa0-10001fac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10001fa0(int param_1)

{
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
}


/*
 * FUN_10001fb0 at 10001fb0
 * int __cdecl FUN_10001fb0(int param_1)
 * Address ranges: 10001fb0-10001fbc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10001fb0(int param_1)

{
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc);
}


/*
 * FUN_10001fc0 at 10001fc0
 * undefined4 __cdecl FUN_10001fc0(int param_1, uint param_2, int * param_3)
 * Address ranges: 10001fc0-10002034
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10001fc0(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_10001fb0(param_1);
  if (uVar1 < param_2) {
    return 0;
  }
  if (((*(uint *)(param_1 + 0xc) + param_2 & 0x1fffff) < param_2) &&
     (iVar2 = ((*(uint *)(param_1 + 0xc) >> 0x15) + 1) * 0x200000, *(int *)(param_1 + 0xc) = iVar2,
     *(uint *)(param_1 + 8) <= iVar2 + param_2)) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0xc) & 7) != 0) {
    do {
      uVar1 = *(int *)(param_1 + 0xc) + 1;
      *(uint *)(param_1 + 0xc) = uVar1;
      if (*(uint *)(param_1 + 8) <= uVar1 + param_2) {
        return 0;
      }
    } while ((uVar1 & 7) != 0);
  }
  iVar2 = *(int *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xc) = param_2 + iVar2;
  *param_3 = iVar2;
  return 1;
}


/*
 * FUN_10002040 at 10002040
 * undefined __cdecl FUN_10002040(int param_1)
 * Address ranges: 10002040-1000204a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10002040(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 4);
  return;
}


/*
 * FUN_10002050 at 10002050
 * undefined __stdcall FUN_10002050(void)
 * Address ranges: 10002050-1000205c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002050(void)

{
  _DAT_100e3a40 = 0;
  DAT_100e3a38 = 0;
  return;
}


/*
 * FUN_10002060 at 10002060
 * undefined __cdecl FUN_10002060(int param_1)
 * Address ranges: 10002060-1000208c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10002060(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (0 < param_1) {
    puVar2 = &DAT_100e1a30;
    puVar3 = &DAT_100e0a30;
    for (iVar1 = param_1; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  FUN_10002050();
  return;
}


/*
 * FUN_100020a0 at 100020a0
 * undefined4 __stdcall FUN_100020a0(void)
 * Address ranges: 100020a0-100021dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_100020a0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  if (DAT_101f55c4 < 2) {
    DAT_101f55a0 = 0;
    DAT_101f55a4 = 0;
    iVar2 = _grTexMinAddress_4(0);
    uVar1 = _grTexMaxAddress_4(0);
    lVar4 = __ftol();
    iVar3 = iVar2 - (int)lVar4;
    DAT_101f5528 = FUN_10001f50(0,iVar2,iVar3);
    if (DAT_101f5528 == 0) goto LAB_100021c1;
    DAT_101f552c = FUN_10001f50(0,iVar3 + 1,uVar1);
  }
  else {
    DAT_101f55a0 = 0;
    DAT_101f55a4 = 1;
    uVar1 = _grTexMaxAddress_4(0);
    uVar5 = 0;
    uVar1 = _grTexMinAddress_4(0,uVar1);
    DAT_101f5528 = FUN_10001f50(0,uVar1,uVar5);
    if (DAT_101f5528 == 0) goto LAB_100021c1;
    uVar5 = 1;
    uVar1 = _grTexMaxAddress_4();
    uVar1 = _grTexMinAddress_4(1,uVar1);
    DAT_101f552c = FUN_10001f50(1,uVar1,uVar5);
  }
  if ((DAT_101f552c != 0) &&
     (DAT_101f5524 = FUN_10001110(s_Texture_Cache_1000e4cc,DAT_101f5528),
     DAT_101f5524 != (char *)0x0)) {
    DAT_101f5534 = FUN_10001110(s_Lightmap_Cache_1000e4bc,DAT_101f552c);
    if (DAT_101f5534 != (char *)0x0) {
      return 1;
    }
  }
LAB_100021c1:
  FUN_100022e0();
  FUN_10002200();
  return 0;
}


/*
 * FUN_100021e0 at 100021e0
 * undefined __stdcall FUN_100021e0(void)
 * Address ranges: 100021e0-100021f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100021e0(void)

{
  FUN_100022e0();
  FUN_10002200();
  DAT_101f5520 = 0;
  _DAT_101f5530 = 0;
  return;
}


/*
 * FUN_10002200 at 10002200
 * undefined __stdcall FUN_10002200(void)
 * Address ranges: 10002200-10002264
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10002200(void)

{
  if (DAT_101f5534 != (undefined *)0x0) {
    FUN_10001f90(DAT_101f5534);
  }
  if (DAT_101f5524 != (undefined *)0x0) {
    FUN_10001f90(DAT_101f5524);
  }
  DAT_101f5524 = (undefined *)0x0;
  DAT_101f5534 = (undefined *)0x0;
  if (DAT_101f552c != (undefined *)0x0) {
    FUN_10001f90(DAT_101f552c);
  }
  if (DAT_101f5528 != (undefined *)0x0) {
    FUN_10001f90(DAT_101f5528);
  }
  DAT_101f5528 = (undefined *)0x0;
  DAT_101f552c = (undefined *)0x0;
  return;
}


/*
 * FUN_10002270 at 10002270
 * char * __stdcall FUN_10002270(void)
 * Address ranges: 10002270-1000229c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char * FUN_10002270(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = &DAT_100e3e20;
  iVar1 = 0;
  do {
    if (*pcVar2 == '\0') {
      pcVar3 = pcVar2;
      for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
        pcVar3[0] = '\0';
        pcVar3[1] = '\0';
        pcVar3[2] = '\0';
        pcVar3[3] = '\0';
        pcVar3 = pcVar3 + 4;
      }
      *pcVar2 = '\x01';
      return pcVar2;
    }
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 0x38;
  } while (iVar1 < 20000);
  return (char *)0x0;
}


/*
 * FUN_100022a0 at 100022a0
 * undefined __cdecl FUN_100022a0(undefined4 * param_1)
 * Address ranges: 100022a0-100022d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100022a0(undefined4 *param_1)

{
  int iVar1;
  
  if ((undefined *)param_1[10] != (undefined *)0x0) {
    FUN_10003f4c((undefined *)param_1[10]);
  }
  if (param_1[0xb] != 0) {
    FUN_100012f0(param_1[0xb]);
    DAT_101f5520 = 1;
  }
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/*
 * FUN_100022e0 at 100022e0
 * undefined __stdcall FUN_100022e0(void)
 * Address ranges: 100022e0-10002302
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_100022e0(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = &DAT_100e3e20;
  iVar2 = 20000;
  do {
    if (*pcVar1 != '\0') {
      FUN_100022a0((undefined4 *)pcVar1);
    }
    pcVar1 = pcVar1 + 0x38;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


/*
 * FUN_10002310 at 10002310
 * undefined4 __cdecl FUN_10002310(int * param_1, int param_2, int param_3, undefined4 param_4, int param_5, int * param_6)
 * Address ranges: 10002310-10002385
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl
FUN_10002310(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2;
  if (param_2 <= param_3) {
    iVar1 = param_3;
  }
  iVar1 = FUN_10002b00(iVar1);
  iVar2 = FUN_10002a00(iVar1,&param_2);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_10002a00(iVar1 >> ((char)param_4 - 1U & 0x1f),&param_3);
  if (iVar2 == 0) {
    return 0;
  }
  *param_6 = iVar1;
  param_1[1] = param_2;
  *param_1 = param_3;
  param_1[2] = 3;
  param_1[3] = param_5;
  return 1;
}


/*
 * FUN_10002390 at 10002390
 * undefined4 __cdecl FUN_10002390(undefined4 param_1, undefined4 * param_2)
 * Address ranges: 10002390-100023ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10002390(undefined4 param_1,undefined4 *param_2)

{
  switch(param_1) {
  case 1:
    *param_2 = 5;
    return 1;
  default:
    *param_2 = 1;
    return 0;
  case 5:
    *param_2 = 10;
    return 1;
  case 7:
    *param_2 = 0xc;
    return 1;
  case 8:
    *param_2 = 0xb;
    return 1;
  }
}


/*
 * FUN_10002410 at 10002410
 * char * __cdecl FUN_10002410(int param_1, undefined4 * param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 10002410-100025e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char * __cdecl FUN_10002410(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  size_t _Size;
  undefined4 uVar5;
  int local_18;
  int local_14 [2];
  void *pvStack_c;
  int iStack_4;
  
  pcVar2 = FUN_10002270();
  if (pcVar2 == (char *)0x0) {
    FUN_10001920(7,s_GLIDE_Create3DTexture__No_more_h_1000e5fc);
    return (char *)0x0;
  }
  if (0x100 < param_1) {
    FUN_10001920(7,s_GLIDE_Create3DTexture__Width_>_2_1000e5d8);
    return (char *)0x0;
  }
  if (0x100 < (int)param_2) {
    FUN_10001920(7,s_GLIDE_Create3DTexture__Height_>_2_1000e5b0);
    return (char *)0x0;
  }
  iVar3 = FUN_10002b00(param_1);
  puVar4 = (undefined4 *)FUN_10002b00((int)param_2);
  if (param_1 != iVar3) {
    FUN_10001920(7,s_GLIDE_Create3DTexture__Not_a_pow_1000e584);
    return (char *)0x0;
  }
  if (param_2 != puVar4) {
    FUN_10001920(7,s_GLIDE_Create3DTexture__Not_a_pow_1000e584);
    return (char *)0x0;
  }
  iVar3 = FUN_10002390(*param_4,&local_18);
  if (iVar3 == 0) {
    FUN_10001920(7,s_GLIDE_RegisterMiscTexture__Glide_1000e540);
    return (char *)0x0;
  }
  piVar1 = (int *)(pcVar2 + 0x10);
  iVar3 = FUN_10002310(local_14,param_1,(int)param_2,param_3,local_18,piVar1);
  if (iVar3 == 0) {
    FUN_10001920(7,s_GLIDE_RegisterMiscTexture__Setup_1000e510);
    return (char *)0x0;
  }
  iVar3 = FUN_10002ae0(*piVar1);
  pcVar2[0x1c] = (char)iVar3;
  _Size = grTexTextureMemRequired(3,local_14);
  pvStack_c = _malloc(_Size);
  if (pvStack_c == (void *)0x0) {
    FUN_10001920(7,s_GLIDE_RegisterMiscTexture__out_o_1000e4dc);
    return (char *)0x0;
  }
  *(void **)(pcVar2 + 0x28) = pvStack_c;
  iVar3 = *piVar1;
  *pcVar2 = '\x01';
  pcVar2[0x14] = (char)param_3;
  *(int *)(pcVar2 + 8) = iStack_4;
  *(undefined4 **)(pcVar2 + 0xc) = param_2;
  *(float *)(pcVar2 + 0x18) = 255.0 / (float)iVar3;
  iStack_4 = iVar3;
  uVar5 = FUN_100012b0(DAT_101f5524,iVar3,iVar3,(char)param_3,(int *)&stack0xffffffe4);
  *(undefined4 *)(pcVar2 + 0x2c) = uVar5;
  *(undefined4 *)(pcVar2 + 0x20) = *param_2;
  *(undefined4 *)(pcVar2 + 0x24) = param_2[1];
  DAT_101f5520 = 1;
  return pcVar2;
}


/*
 * FUN_100025f0 at 100025f0
 * char * __cdecl FUN_100025f0(int param_1, int param_2, undefined1 param_3, int * param_4)
 * Address ranges: 100025f0-100026d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char * __cdecl FUN_100025f0(int param_1,int param_2,undefined1 param_3,int *param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int local_14 [5];
  
  pcVar2 = FUN_10002270();
  if (pcVar2 == (char *)0x0) {
    FUN_10001920(7,s_GLIDE_CreateLightmapTexture__Max_1000e6ac);
    return (char *)0x0;
  }
  if ((*(byte *)(param_4 + 1) & 4) == 0) {
    FUN_10001920(7,s_GLIDE_CreateLightmapTexture__Inv_1000e678);
    return (char *)0x0;
  }
  if (*param_4 != 5) {
    FUN_10001920(7,s_GLIDE_CreateLightmapTexture__Pix_1000e62c);
    return (char *)0x0;
  }
  piVar1 = (int *)(pcVar2 + 0x10);
  *(int *)(pcVar2 + 8) = param_1;
  *(int *)(pcVar2 + 0xc) = param_2;
  iVar3 = FUN_10002310(local_14,param_1,param_2,1,10,piVar1);
  if (iVar3 == 0) {
    return (char *)0x0;
  }
  iVar3 = FUN_10002ae0(*piVar1);
  pcVar2[0x1c] = (char)iVar3;
  uVar4 = FUN_100012b0(DAT_101f5534,*piVar1,*piVar1,param_3,local_14);
  *(undefined4 *)(pcVar2 + 0x2c) = uVar4;
  *(float *)(pcVar2 + 0x18) = 255.0 / (float)(*piVar1 << 4);
  DAT_101f5520 = 1;
  return pcVar2;
}


/*
 * FUN_100026e0 at 100026e0
 * char * __cdecl FUN_100026e0(int param_1, int param_2, char param_3, undefined4 * param_4)
 * Address ranges: 100026e0-1000273a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char * __cdecl FUN_100026e0(int param_1,int param_2,char param_3,undefined4 *param_4)

{
  char *pcVar1;
  void *pvVar2;
  
  pcVar1 = FUN_10002270();
  if (pcVar1 == (char *)0x0) {
    FUN_10001920(7,s_GLIDE_CreateTexture__No_more_han_1000e6e0);
    return (char *)0x0;
  }
  *(int *)(pcVar1 + 8) = param_1;
  *(int *)(pcVar1 + 0x10) = param_1;
  *(int *)(pcVar1 + 0xc) = param_2;
  pcVar1[0x14] = param_3;
  pvVar2 = _malloc(param_1 * param_2 * 2);
  *(void **)(pcVar1 + 0x28) = pvVar2;
  *(undefined4 *)(pcVar1 + 0x20) = *param_4;
  *(undefined4 *)(pcVar1 + 0x24) = param_4[1];
  return pcVar1;
}


/*
 * FUN_10002740 at 10002740
 * char * __cdecl FUN_10002740(undefined4 param_1, undefined4 param_2, char param_3, int * param_4)
 * Address ranges: 10002740-100027d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char * __cdecl FUN_10002740(undefined4 param_1,undefined4 param_2,char param_3,int *param_4)

{
  char *pcVar1;
  void *pvVar2;
  
  pcVar1 = FUN_10002270();
  if (pcVar1 == (char *)0x0) {
    FUN_10001920(7,s_GLIDE_CreatePalTexture__No_more_h_1000e73c);
    return (char *)0x0;
  }
  if (*param_4 != 0xd) {
    FUN_10001920(7,s_GLIDE_CreatePalTexture__Invalid_p_1000e70c);
    return (char *)0x0;
  }
  pvVar2 = _malloc(0x400);
  if (pvVar2 == (void *)0x0) {
    FUN_10001920(7,s_GLIDE_RegisterMiscTexture__out_o_1000e4dc);
    return (char *)0x0;
  }
  *(void **)(pcVar1 + 0x28) = pvVar2;
  *pcVar1 = '\x01';
  pcVar1[0x14] = param_3;
  *(undefined4 *)(pcVar1 + 8) = param_1;
  *(undefined4 *)(pcVar1 + 0xc) = param_2;
  *(undefined4 *)(pcVar1 + 0x10) = param_1;
  *(int *)(pcVar1 + 0x20) = *param_4;
  *(int *)(pcVar1 + 0x24) = param_4[1];
  return pcVar1;
}


/*
 * FUN_100027e0 at 100027e0
 * char * __fastcall FUN_100027e0(int param_1, undefined4 * param_2, undefined4 param_3, int * param_4)
 * Address ranges: 100027e0-1000285c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char * __fastcall FUN_100027e0(int param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  
  uVar1 = param_4[1];
  cVar3 = (char)param_3;
  if ((uVar1 & 1) != 0) {
    pcVar2 = FUN_100026e0(param_1,(int)param_2,cVar3,param_4);
    return pcVar2;
  }
  if ((uVar1 & 2) != 0) {
    pcVar2 = FUN_10002410(param_1,param_2,param_3,param_4);
    return pcVar2;
  }
  if ((uVar1 & 4) != 0) {
    pcVar2 = FUN_100025f0(param_1,(int)param_2,cVar3,param_4);
    return pcVar2;
  }
  if ((uVar1 & 8) != 0) {
    pcVar2 = FUN_10002740(param_1,param_2,cVar3,param_4);
    return pcVar2;
  }
  FUN_10001920(7,s_GLIDE_CreateTexture__Invalid_pix_1000e76c);
  return (char *)0x0;
}


/*
 * FUN_10002980 at 10002980
 * undefined4 __stdcall FUN_10002980(void)
 * Address ranges: 10002980-100029f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10002980(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_101f5520 != 0) {
    iVar1 = FUN_100014d0(DAT_101f5524);
    if (iVar1 == 0) {
      FUN_10001920(4,s_GTHandle_CheckTextures__GCache_A_1000e814);
      return 0;
    }
    iVar1 = FUN_100014d0(DAT_101f5534);
    if (iVar1 == 0) {
      FUN_10001920(4,s_GTHandle_CheckTextures__GCache_A_1000e7d8);
      return 0;
    }
    puVar2 = &DAT_100e3e50;
    iVar1 = 20000;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 0xe;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    DAT_101f5520 = 0;
  }
  return 1;
}


/*
 * FUN_10002a00 at 10002a00
 * undefined4 __cdecl FUN_10002a00(int param_1, undefined4 * param_2)
 * Address ranges: 10002a00-10002ad6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10002a00(int param_1,undefined4 *param_2)

{
  if (param_1 == 1) {
    *param_2 = 8;
    return 1;
  }
  if (param_1 == 2) {
    *param_2 = 7;
    return 1;
  }
  if (param_1 == 4) {
    *param_2 = 6;
    return 1;
  }
  if (param_1 == 8) {
    *param_2 = 5;
    return 1;
  }
  if (param_1 == 0x10) {
    *param_2 = 4;
    return 1;
  }
  if (param_1 == 0x20) {
    *param_2 = 3;
    return 1;
  }
  if (param_1 == 0x40) {
    *param_2 = 2;
    return 1;
  }
  if (param_1 == 0x80) {
    *param_2 = 1;
    return 1;
  }
  if (param_1 == 0x100) {
    *param_2 = 0;
    return 1;
  }
  FUN_10001920(7,s_GLIDE_GetLod__Invalid_texture_wi_1000e850);
  return 0;
}


/*
 * FUN_10002ae0 at 10002ae0
 * int __cdecl FUN_10002ae0(int param_1)
 * Address ranges: 10002ae0-10002af4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10002ae0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; 0 < param_1; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1 + -1;
}


/*
 * FUN_10002b00 at 10002b00
 * undefined __cdecl FUN_10002b00(int param_1)
 * Address ranges: 10002b00-10002b13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10002b00(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (1 < param_1) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1);
  }
  return;
}


/*
 * FUN_10002b20 at 10002b20
 * undefined __cdecl FUN_10002b20(int param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10002b20-10002b4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10002b20(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(&DAT_1000e87c + param_1 * 4) != param_2) {
    _grTexSource_16(param_1,param_2,param_3,param_4);
    *(int *)(&DAT_1000e87c + param_1 * 4) = param_2;
  }
  return;
}


/*
 * FUN_10002b50 at 10002b50
 * undefined __cdecl FUN_10002b50(int param_1)
 * Address ranges: 10002b50-10002ba8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10002b50(int param_1)

{
  if (DAT_100e3a50 != param_1) {
    switch(param_1) {
    case 1:
      _guColorCombineFunction_4(2);
      DAT_100e3a50 = param_1;
      return;
    case 2:
      _guColorCombineFunction_4(4);
      DAT_100e3a50 = param_1;
      return;
    case 3:
      _guColorCombineFunction_4(6);
      DAT_100e3a50 = param_1;
      return;
    case 4:
      _guColorCombineFunction_4(8);
    }
    DAT_100e3a50 = param_1;
  }
  return;
}


/*
 * FUN_10002bc0 at 10002bc0
 * undefined __cdecl FUN_10002bc0(int param_1)
 * Address ranges: 10002bc0-10002c87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10002bc0(int param_1)

{
  if (DAT_100e3a54 != param_1) {
    switch(param_1) {
    case 1:
      _guTexCombineFunction_8(DAT_101f55a0,10);
      if (1 < DAT_101f55c4) {
        _guTexCombineFunction_8(DAT_101f55a4,0);
        DAT_100e3a54 = param_1;
        return;
      }
      break;
    case 2:
      _guTexCombineFunction_8(DAT_101f55a0,1);
      if (1 < DAT_101f55c4) {
        _guTexCombineFunction_8(DAT_101f55a4,0);
        DAT_100e3a54 = param_1;
        return;
      }
      break;
    case 3:
      _guTexCombineFunction_8(DAT_101f55a0,4);
      _guTexCombineFunction_8(DAT_101f55a4,1);
      DAT_100e3a54 = param_1;
      return;
    case 4:
      _guTexCombineFunction_8(DAT_101f55a0,2);
      _guTexCombineFunction_8(DAT_101f55a4,1);
    }
    DAT_100e3a54 = param_1;
  }
  return;
}


/*
 * FUN_10002ca0 at 10002ca0
 * undefined __cdecl FUN_10002ca0(int param_1, uint param_2)
 * Address ranges: 10002ca0-10002fc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10002ca0(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 != DAT_100e3a5c) {
    if ((param_2 & 4) == 0) {
      if ((DAT_100e3a5c & 4) != 0) {
        uVar1 = 6;
        goto LAB_10002cbe;
      }
    }
    else {
      uVar1 = 7;
LAB_10002cbe:
      _grDepthBufferFunction_4(uVar1);
    }
    if ((param_2 & 8) == 0) {
      if ((DAT_100e3a5c & 8) != 0) {
        uVar1 = 1;
        goto LAB_10002cd7;
      }
    }
    else {
      uVar1 = 0;
LAB_10002cd7:
      _grDepthMask_4(uVar1);
    }
    if ((param_2 & 0x10) == 0) {
      if ((DAT_100e3a5c & 0x10) == 0) goto LAB_10002d06;
      uVar2 = 0;
      uVar1 = 0;
    }
    else {
      uVar2 = 1;
      uVar1 = 1;
    }
    _grTexClampMode_12(DAT_101f55a0,uVar1,uVar2);
  }
LAB_10002d06:
  DAT_100e3a5c = param_2;
  if (param_1 == DAT_100e3a58) {
    return;
  }
  if (DAT_100e3a58 == 9) {
    _grChromakeyMode_4(0);
  }
  switch(param_1) {
  case 1:
    _grTexMipMapMode_12(DAT_101f55a0,1,0);
    FUN_10002b50(3);
    FUN_10002bc0(2);
    uVar2 = 5;
    uVar1 = 1;
    goto LAB_10002e3d;
  case 2:
  case 3:
    FUN_10002b50(1);
    FUN_10002bc0(1);
    uVar2 = 4;
    uVar1 = 4;
    goto LAB_10002e3d;
  case 4:
    FUN_10002b50(3);
    FUN_10002bc0(2);
    _grTexMipMapMode_12(DAT_101f55a0,1,0);
    uVar2 = 2;
    uVar1 = 2;
LAB_10002e3d:
    _grAlphaBlendFunction_16(1,5,uVar1,uVar2);
    if (DAT_1000e338 != 0) {
      _grFogMode_4(2);
      DAT_100e3a58 = param_1;
      return;
    }
    break;
  case 5:
    FUN_10002b50(3);
    FUN_10002bc0(2);
    _grTexMipMapMode_12(DAT_101f55a0,1,0);
    _grAlphaBlendFunction_16(4,0,4,0);
    if (DAT_1000e338 != 0) {
      _grFogMode_4(2);
      DAT_100e3a58 = param_1;
      return;
    }
    break;
  case 6:
    FUN_10002b50(3);
    FUN_10002bc0(2);
    _grTexMipMapMode_12(DAT_101f55a0,1,0);
    _grAlphaBlendFunction_16(4,0,4,0);
    if (DAT_1000e338 != 0) {
      _grFogMode_4(0x202);
      DAT_100e3a58 = param_1;
      return;
    }
    break;
  case 7:
    _grTexMipMapMode_12(DAT_101f55a4,0,0);
    if (1 < DAT_101f55c4) {
      FUN_10002b50(3);
      _grAlphaBlendFunction_16(1,5,2,2);
      if (DAT_1000e338 != 0) {
        _grFogMode_4(2);
      }
      FUN_10002bc0(3);
      _grTexMipMapMode_12(DAT_101f55a0,1,0);
      DAT_100e3a58 = param_1;
      return;
    }
    FUN_10002b50(3);
    FUN_10002bc0(2);
    if (DAT_1000e338 == 0) {
      uVar2 = 0;
      uVar1 = 2;
    }
    else {
      _grFogMode_4(0x102);
      uVar2 = 0xf;
      uVar1 = 4;
    }
    _grAlphaBlendFunction_16(uVar1,uVar2,4,0);
    _grTexClampMode_12(DAT_101f55a0,1,1);
    DAT_100e3a58 = param_1;
    DAT_100e3a5c = DAT_100e3a5c | 0x10;
    return;
  case 8:
    _grTexMipMapMode_12(DAT_101f55a4,0,0);
    FUN_10002b50(3);
    if (DAT_101f55c4 < 2) {
      FUN_10002bc0(2);
    }
    else {
      FUN_10002bc0(4);
      _grTexMipMapMode_12(DAT_101f55a0,1,0);
    }
    if (DAT_1000e338 != 0) {
      _grFogMode_4(0);
    }
    _grAlphaBlendFunction_16(4,4,4,4);
    DAT_100e3a58 = param_1;
    return;
  case 9:
    _grLfbConstantDepth_4(0xffff);
    _grLfbConstantAlpha_4(0xff);
    _grChromakeyMode_4(1);
    _grAlphaBlendFunction_16(4,0,4,0);
  }
  DAT_100e3a58 = param_1;
  return;
}


/*
 * FUN_100030d0 at 100030d0
 * undefined4 __fastcall FUN_100030d0(int param_1, int param_2)
 * Address ranges: 100030d0-100031c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __fastcall FUN_100030d0(int param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int local_f04;
  undefined1 local_f00 [16];
  undefined4 local_ef0 [956];
  
  if (0 < param_2) {
    puVar3 = local_ef0;
    local_f04 = param_2;
    do {
      fVar2 = 1.0 / *(float *)(param_1 + 8);
      puVar3[-1] = 0x437f0000;
      *puVar3 = 0x437f0000;
      puVar3[1] = 0x437f0000;
      puVar3[3] = 0x437f0000;
      puVar3[2] = 65535.0 / *(float *)(param_1 + 8);
      puVar3[4] = fVar2;
      puVar3[7] = fVar2;
      lVar6 = __ftol();
      puVar3[-4] = (float)(int)lVar6 * 0.0625;
      lVar6 = __ftol();
      param_1 = param_1 + 0x24;
      local_f04 = local_f04 + -1;
      puVar3[-3] = (float)(int)lVar6 * 0.0625;
      puVar3 = puVar3 + 0xf;
    } while (local_f04 != 0);
  }
  FUN_10002ca0(3,0);
  if (0 < param_2) {
    puVar5 = local_f00;
    uVar4 = 1;
    do {
      _grDrawLine_8(puVar5,local_f00 + ((param_2 <= (int)uVar4) - 1 & uVar4) * 0x3c);
      puVar5 = puVar5 + 0x3c;
      bVar1 = (int)uVar4 < param_2;
      uVar4 = uVar4 + 1;
    } while (bVar1);
  }
  DAT_1000e268 = DAT_1000e268 + 1;
  return 1;
}


/*
 * FUN_10003420 at 10003420
 * undefined __cdecl FUN_10003420(int param_1, undefined4 param_2, short * param_3, int param_4, uint param_5)
 * Address ranges: 10003420-10003537
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10003420(int param_1,undefined4 param_2,short *param_3,int param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_retaddr;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_3 + 0xc);
  piVar2 = (int *)FUN_10003840(iVar1,param_3,param_4,0);
  FUN_100016b0(piVar2,DAT_100e3e14);
  uVar3 = FUN_100016a0(piVar2);
  uVar5 = 3;
  iVar4 = FUN_10001630((int)piVar2);
  FUN_10002b20(DAT_101f55a4,iVar4,uVar5,uVar3);
  FUN_10002ca0(7,param_5);
  _grDrawPolygonVertexList_8(param_2,param_1);
  param_1 = 1;
  do {
    if (*(int *)(param_3 + param_1 * 2 + 6) != 0) {
      if (param_1 == 0) {
        FUN_10003540(param_3,*(int *)(iVar1 + 0x10),piVar2,0);
        uVar3 = FUN_100016a0(piVar2);
        uVar5 = 3;
        iVar4 = FUN_10001630((int)piVar2);
        FUN_10002b20(DAT_101f55a4,iVar4,uVar5,uVar3);
        iVar4 = 7;
LAB_1000350a:
        FUN_10002ca0(iVar4,param_5);
      }
      else if (param_1 == 1) {
        FUN_10003540(param_3,*(int *)(iVar1 + 0x10),piVar2,1);
        uVar3 = FUN_100016a0(piVar2);
        uVar5 = 3;
        iVar4 = FUN_10001630((int)piVar2);
        FUN_10002b20(DAT_101f55a4,iVar4,uVar5,uVar3);
        iVar4 = 8;
        goto LAB_1000350a;
      }
      _grDrawPolygonVertexList_8(unaff_retaddr,unaff_EBX);
    }
    param_1 = param_1 + 1;
    if (1 < param_1) {
      return;
    }
  } while( true );
}


/*
 * FUN_10003540 at 10003540
 * undefined __cdecl FUN_10003540(short * param_1, int param_2, undefined4 * param_3, int param_4)
 * Address ranges: 10003540-100035f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10003540(short *param_1,int param_2,undefined4 *param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int local_808;
  short local_800 [1024];
  
  local_808 = (int)param_1[1];
  iVar8 = (int)*param_1;
  pbVar4 = *(byte **)(param_1 + param_4 * 2 + 6);
  psVar6 = local_800;
  if (0 < local_808) {
    do {
      iVar5 = 0;
      psVar7 = psVar6;
      iVar9 = iVar8;
      if (0 < iVar8) {
        do {
          bVar3 = *pbVar4;
          pbVar1 = pbVar4 + 1;
          psVar7 = psVar6 + 1;
          pbVar2 = pbVar4 + 2;
          pbVar4 = pbVar4 + 3;
          iVar9 = iVar9 + -1;
          *psVar6 = ((ushort)(bVar3 >> 3) * 0x40 + (ushort)(*pbVar1 >> 2)) * 0x20 +
                    (ushort)(*pbVar2 >> 3);
          iVar5 = iVar8;
          psVar6 = psVar7;
        } while (iVar9 != 0);
      }
      psVar6 = psVar7 + (param_2 - iVar5);
      local_808 = local_808 + -1;
    } while (local_808 != 0);
  }
  iVar8 = FUN_100016a0(param_3);
  *(short **)(iVar8 + 0x10) = local_800;
  FUN_10001280(DAT_101f5534,(int)param_3,iVar8);
  return;
}


/*
 * FUN_10003730 at 10003730
 * undefined __cdecl FUN_10003730(int param_1)
 * Address ranges: 10003730-10003833
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10003730(int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_10002980();
  if ((*(int *)(param_1 + 0x20) == 1) &&
     ((iVar2 = *(int *)(param_1 + 4), DAT_100e3de8 != iVar2 || ((*(byte *)(iVar2 + 0x34) & 1) != 0))
     )) {
    _grTexDownloadTable_12(DAT_101f55a0,2,*(undefined4 *)(iVar2 + 0x28));
    DAT_100e3de8 = *(int *)(param_1 + 4);
    pbVar1 = (byte *)(*(int *)(param_1 + 4) + 0x34);
    *pbVar1 = *pbVar1 & 0xfe;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = FUN_10001690(*(int *)(param_1 + 0x30));
    if (iVar2 == param_1) goto LAB_100037b6;
  }
  iVar2 = FUN_10001640(*(int *)(param_1 + 0x2c));
  *(int *)(param_1 + 0x30) = iVar2;
  FUN_10001680(iVar2,param_1);
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 1;
  DAT_100e3e0c = DAT_100e3e0c + 1;
LAB_100037b6:
  if ((*(byte *)(param_1 + 0x34) & 1) != 0) {
    iVar2 = FUN_100016a0(*(undefined4 **)(param_1 + 0x30));
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x28);
    FUN_10002390(*(undefined4 *)(param_1 + 0x20),(undefined4 *)(iVar2 + 0xc));
    FUN_10001280(DAT_101f5524,*(int *)(param_1 + 0x30),iVar2);
    *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & 0xfe;
  }
  FUN_100016b0(*(int **)(param_1 + 0x30),DAT_100e3e14);
  uVar3 = FUN_100016a0(*(undefined4 **)(param_1 + 0x30));
  uVar4 = 3;
  iVar2 = FUN_10001630(*(int *)(param_1 + 0x30));
  FUN_10002b20(DAT_101f55a0,iVar2,uVar4,uVar3);
  return;
}


/*
 * FUN_10003840 at 10003840
 * undefined4 __cdecl FUN_10003840(int param_1, short * param_2, int param_3, int param_4)
 * Address ranges: 10003840-100038de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10003840(int param_1,short *param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  
  FUN_10002980();
  if (param_3 != 0) {
    *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = FUN_10001690(*(int *)(param_1 + 0x30));
    if (iVar2 == param_1) goto LAB_10003896;
  }
  iVar2 = FUN_10001640(*(int *)(param_1 + 0x2c));
  *(int *)(param_1 + 0x30) = iVar2;
  FUN_10001680(iVar2,param_1);
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 1;
  DAT_100e3e10 = DAT_100e3e10 + 1;
LAB_10003896:
  if ((*(byte *)(param_1 + 0x34) & 1) != 0) {
    FUN_10003540(param_2,*(int *)(param_1 + 0x10),*(undefined4 **)(param_1 + 0x30),param_4);
  }
  if (param_3 == 0) {
    bVar1 = *(byte *)(param_1 + 0x34) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x34) | 1;
  }
  *(byte *)(param_1 + 0x34) = bVar1;
  FUN_100016b0(*(int **)(param_1 + 0x30),DAT_100e3e14);
  return *(undefined4 *)(param_1 + 0x30);
}


/*
 * GLIDE2X.DLL::grTexTextureMemRequired at 10003c50
 * undefined __stdcall grTexTextureMemRequired(void)
 * Address ranges: 10003c50-10003c55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::grTexTextureMemRequired
 */


void grTexTextureMemRequired(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  grTexTextureMemRequired();
  return;
}


/*
 * GLIDE2X.DLL::grTexDownloadMipMap at 10003c56
 * undefined __stdcall grTexDownloadMipMap(void)
 * Address ranges: 10003c56-10003c5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::grTexDownloadMipMap
 */


void grTexDownloadMipMap(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003c56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  grTexDownloadMipMap();
  return;
}


/*
 * GLIDE2X.DLL::_grTexSource@16 at 10003c5c
 * undefined _grTexSource@16(void)
 * Address ranges: 10003c5c-10003c61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grTexSource@16
 */


void _grTexSource_16(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grTexSource_16();
  return;
}


/*
 * GLIDE2X.DLL::_grGlideShutdown@0 at 10003c62
 * undefined _grGlideShutdown@0(void)
 * Address ranges: 10003c62-10003c67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grGlideShutdown@0
 */


void _grGlideShutdown_0(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003c62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grGlideShutdown_0();
  return;
}


/*
 * GLIDE2X.DLL::_grGlideInit@0 at 10003c68
 * undefined _grGlideInit@0(void)
 * Address ranges: 10003c68-10003c6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grGlideInit@0
 */


void _grGlideInit_0(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grGlideInit_0();
  return;
}


/*
 * GLIDE2X.DLL::_grGammaCorrectionValue@4 at 10003c6e
 * undefined _grGammaCorrectionValue@4(void)
 * Address ranges: 10003c6e-10003c73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grGammaCorrectionValue@4
 */


void _grGammaCorrectionValue_4(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003c6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grGammaCorrectionValue_4();
  return;
}


/*
 * GLIDE2X.DLL::_grSstWinOpen@28 at 10003c74
 * undefined _grSstWinOpen@28(void)
 * Address ranges: 10003c74-10003c79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grSstWinOpen@28
 */


void _grSstWinOpen_28(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grSstWinOpen_28();
  return;
}


/*
 * GLIDE2X.DLL::_grSstSelect@4 at 10003c7a
 * undefined _grSstSelect@4(void)
 * Address ranges: 10003c7a-10003c7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grSstSelect@4
 */


void _grSstSelect_4(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grSstSelect_4();
  return;
}


/*
 * GLIDE2X.DLL::_grSstQueryHardware@4 at 10003c80
 * undefined _grSstQueryHardware@4(void)
 * Address ranges: 10003c80-10003c85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grSstQueryHardware@4
 */


void _grSstQueryHardware_4(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grSstQueryHardware_4();
  return;
}


/*
 * GLIDE2X.DLL::_grHints@8 at 10003c86
 * undefined _grHints@8(void)
 * Address ranges: 10003c86-10003c8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grHints@8
 */


void _grHints_8(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grHints_8();
  return;
}


/*
 * GLIDE2X.DLL::_grAlphaCombine@20 at 10003c8c
 * undefined _grAlphaCombine@20(void)
 * Address ranges: 10003c8c-10003c91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grAlphaCombine@20
 */


void _grAlphaCombine_20(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grAlphaCombine_20();
  return;
}


/*
 * GLIDE2X.DLL::_grColorCombine@20 at 10003c92
 * undefined _grColorCombine@20(void)
 * Address ranges: 10003c92-10003c97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grColorCombine@20
 */


void _grColorCombine_20(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003c92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grColorCombine_20();
  return;
}


/*
 * GLIDE2X.DLL::_grTexCombine@28 at 10003c98
 * undefined _grTexCombine@28(void)
 * Address ranges: 10003c98-10003c9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grTexCombine@28
 */


void _grTexCombine_28(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grTexCombine_28();
  return;
}


/*
 * GLIDE2X.DLL::_grTexClampMode@12 at 10003c9e
 * undefined _grTexClampMode@12(void)
 * Address ranges: 10003c9e-10003ca3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grTexClampMode@12
 */


void _grTexClampMode_12(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003c9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grTexClampMode_12();
  return;
}


/*
 * GLIDE2X.DLL::_grTexFilterMode@12 at 10003ca4
 * undefined _grTexFilterMode@12(void)
 * Address ranges: 10003ca4-10003ca9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grTexFilterMode@12
 */


void _grTexFilterMode_12(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grTexFilterMode_12();
  return;
}


/*
 * GLIDE2X.DLL::_guTexCombineFunction@8 at 10003caa
 * undefined _guTexCombineFunction@8(void)
 * Address ranges: 10003caa-10003caf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_guTexCombineFunction@8
 */


void _guTexCombineFunction_8(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003caa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _guTexCombineFunction_8();
  return;
}


/*
 * GLIDE2X.DLL::_guColorCombineFunction@4 at 10003cb0
 * undefined _guColorCombineFunction@4(void)
 * Address ranges: 10003cb0-10003cb5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_guColorCombineFunction@4
 */


void _guColorCombineFunction_4(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _guColorCombineFunction_4();
  return;
}


/*
 * GLIDE2X.DLL::_grTexLodBiasValue@8 at 10003cb6
 * undefined _grTexLodBiasValue@8(void)
 * Address ranges: 10003cb6-10003cbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grTexLodBiasValue@8
 */


void _grTexLodBiasValue_8(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003cb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grTexLodBiasValue_8();
  return;
}


/*
 * GLIDE2X.DLL::_grTexDetailControl@16 at 10003cbc
 * undefined _grTexDetailControl@16(void)
 * Address ranges: 10003cbc-10003cc1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grTexDetailControl@16
 */


void _grTexDetailControl_16(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grTexDetailControl_16();
  return;
}


/*
 * GLIDE2X.DLL::_grChromakeyValue@4 at 10003cc2
 * undefined _grChromakeyValue@4(void)
 * Address ranges: 10003cc2-10003cc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grChromakeyValue@4
 */


void _grChromakeyValue_4(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003cc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grChromakeyValue_4();
  return;
}


/*
 * GLIDE2X.DLL::_grChromakeyMode@4 at 10003cc8
 * undefined _grChromakeyMode@4(void)
 * Address ranges: 10003cc8-10003ccd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grChromakeyMode@4
 */


void _grChromakeyMode_4(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grChromakeyMode_4();
  return;
}


/*
 * GLIDE2X.DLL::_grDepthMask@4 at 10003cce
 * undefined _grDepthMask@4(void)
 * Address ranges: 10003cce-10003cd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grDepthMask@4
 */


void _grDepthMask_4(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003cce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grDepthMask_4();
  return;
}


/*
 * GLIDE2X.DLL::_grDepthBufferFunction@4 at 10003cd4
 * undefined _grDepthBufferFunction@4(void)
 * Address ranges: 10003cd4-10003cd9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grDepthBufferFunction@4
 */


void _grDepthBufferFunction_4(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grDepthBufferFunction_4();
  return;
}


/*
 * GLIDE2X.DLL::_grDepthBufferMode@4 at 10003cda
 * undefined _grDepthBufferMode@4(void)
 * Address ranges: 10003cda-10003cdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grDepthBufferMode@4
 */


void _grDepthBufferMode_4(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003cda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grDepthBufferMode_4();
  return;
}


/*
 * GLIDE2X.DLL::grLfbReadRegion at 10003ce0
 * undefined __stdcall grLfbReadRegion(void)
 * Address ranges: 10003ce0-10003ce5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::grLfbReadRegion
 */


void grLfbReadRegion(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  grLfbReadRegion();
  return;
}


/*
 * GLIDE2X.DLL::_grFogTable@4 at 10003ce6
 * undefined _grFogTable@4(void)
 * Address ranges: 10003ce6-10003ceb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grFogTable@4
 */


void _grFogTable_4(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003ce6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grFogTable_4();
  return;
}


/*
 * GLIDE2X.DLL::_guFogGenerateLinear@12 at 10003cec
 * undefined _guFogGenerateLinear@12(void)
 * Address ranges: 10003cec-10003cf1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_guFogGenerateLinear@12
 */


void _guFogGenerateLinear_12(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _guFogGenerateLinear_12();
  return;
}


/*
 * GLIDE2X.DLL::_grFogColorValue@4 at 10003cf2
 * undefined _grFogColorValue@4(void)
 * Address ranges: 10003cf2-10003cf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grFogColorValue@4
 */


void _grFogColorValue_4(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003cf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grFogColorValue_4();
  return;
}


/*
 * GLIDE2X.DLL::_grFogMode@4 at 10003cf8
 * undefined _grFogMode@4(void)
 * Address ranges: 10003cf8-10003cfd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grFogMode@4
 */


void _grFogMode_4(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grFogMode_4();
  return;
}


/*
 * GLIDE2X.DLL::_grTexMinAddress@4 at 10003cfe
 * undefined _grTexMinAddress@4(void)
 * Address ranges: 10003cfe-10003d03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grTexMinAddress@4
 */


void _grTexMinAddress_4(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003cfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grTexMinAddress_4();
  return;
}


/*
 * GLIDE2X.DLL::_grTexMaxAddress@4 at 10003d04
 * undefined _grTexMaxAddress@4(void)
 * Address ranges: 10003d04-10003d09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grTexMaxAddress@4
 */


void _grTexMaxAddress_4(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grTexMaxAddress_4();
  return;
}


/*
 * GLIDE2X.DLL::_grLfbConstantAlpha@4 at 10003d0a
 * undefined _grLfbConstantAlpha@4(void)
 * Address ranges: 10003d0a-10003d0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grLfbConstantAlpha@4
 */


void _grLfbConstantAlpha_4(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003d0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grLfbConstantAlpha_4();
  return;
}


/*
 * GLIDE2X.DLL::_grLfbConstantDepth@4 at 10003d10
 * undefined _grLfbConstantDepth@4(void)
 * Address ranges: 10003d10-10003d15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grLfbConstantDepth@4
 */


void _grLfbConstantDepth_4(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grLfbConstantDepth_4();
  return;
}


/*
 * GLIDE2X.DLL::_grAlphaBlendFunction@16 at 10003d16
 * undefined _grAlphaBlendFunction@16(void)
 * Address ranges: 10003d16-10003d1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grAlphaBlendFunction@16
 */


void _grAlphaBlendFunction_16(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003d16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grAlphaBlendFunction_16();
  return;
}


/*
 * GLIDE2X.DLL::_grTexMipMapMode@12 at 10003d1c
 * undefined _grTexMipMapMode@12(void)
 * Address ranges: 10003d1c-10003d21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grTexMipMapMode@12
 */


void _grTexMipMapMode_12(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grTexMipMapMode_12();
  return;
}


/*
 * GLIDE2X.DLL::_grDrawPolygonVertexList@8 at 10003d22
 * undefined _grDrawPolygonVertexList@8(void)
 * Address ranges: 10003d22-10003d27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grDrawPolygonVertexList@8
 */


void _grDrawPolygonVertexList_8(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003d22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grDrawPolygonVertexList_8();
  return;
}


/*
 * GLIDE2X.DLL::_grDrawLine@8 at 10003d28
 * undefined _grDrawLine@8(void)
 * Address ranges: 10003d28-10003d2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grDrawLine@8
 */


void _grDrawLine_8(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grDrawLine_8();
  return;
}


/*
 * GLIDE2X.DLL::_grTexDownloadTable@12 at 10003d2e
 * undefined _grTexDownloadTable@12(void)
 * Address ranges: 10003d2e-10003d33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grTexDownloadTable@12
 */


void _grTexDownloadTable_12(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003d2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grTexDownloadTable_12();
  return;
}


/*
 * GLIDE2X.DLL::_grLfbUnlock@8 at 10003d34
 * undefined _grLfbUnlock@8(void)
 * Address ranges: 10003d34-10003d39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grLfbUnlock@8
 */


void _grLfbUnlock_8(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grLfbUnlock_8();
  return;
}


/*
 * GLIDE2X.DLL::_grLfbLock@24 at 10003d3a
 * undefined _grLfbLock@24(void)
 * Address ranges: 10003d3a-10003d3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grLfbLock@24
 */


void _grLfbLock_24(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003d3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grLfbLock_24();
  return;
}


/*
 * GLIDE2X.DLL::_grBufferClear@12 at 10003d40
 * undefined _grBufferClear@12(void)
 * Address ranges: 10003d40-10003d45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grBufferClear@12
 */


void _grBufferClear_12(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grBufferClear_12();
  return;
}


/*
 * GLIDE2X.DLL::_grColorMask@8 at 10003d46
 * undefined _grColorMask@8(void)
 * Address ranges: 10003d46-10003d4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grColorMask@8
 */


void _grColorMask_8(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003d46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grColorMask_8();
  return;
}


/*
 * GLIDE2X.DLL::_grBufferSwap@4 at 10003d4c
 * undefined _grBufferSwap@4(void)
 * Address ranges: 10003d4c-10003d51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GLIDE2X.DLL::_grBufferSwap@4
 */


void _grBufferSwap_4(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _grBufferSwap_4();
  return;
}


/*
 * FUN_10003d52 at 10003d52
 * undefined4 __cdecl FUN_10003d52(FILE * param_1)
 * Address ranges: 10003d52-10003d82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10003d52(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_10004488((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_100044da((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}


/*
 * __fclose_lk at 10003d83
 * undefined4 __cdecl __fclose_lk(FILE * param_1)
 * Address ranges: 10003d83-10003dce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __fclose_lk  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x83) != 0) {
    uVar2 = FUN_10004665((int *)param_1);
    __freebuf(param_1);
    iVar1 = FUN_1000452c(param_1->_file);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_10003f4c(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return uVar2;
}


/*
 * FUN_10003dcf at 10003dcf
 * uint __cdecl FUN_10003dcf(char * param_1, uint param_2, uint param_3, int * param_4)
 * Address ranges: 10003dcf-10003dfd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_10003dcf(char *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  FUN_10004488((uint)param_4);
  uVar1 = FUN_10003dfe(param_1,param_2,param_3,param_4);
  FUN_100044da((uint)param_4);
  return uVar1;
}


/*
 * FUN_10003dfe at 10003dfe
 * uint __cdecl FUN_10003dfe(char * param_1, uint param_2, uint param_3, int * param_4)
 * Address ranges: 10003dfe-10003f07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_10003dfe(char *param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar1 = param_4;
  piVar6 = (int *)(param_2 * param_3);
  if (piVar6 == (int *)0x0) {
    param_3 = 0;
  }
  else {
    piVar5 = piVar6;
    if ((*(ushort *)(param_4 + 3) & 0x10c) == 0) {
      param_4 = (int *)0x1000;
    }
    else {
      param_4 = (int *)param_4[6];
    }
    do {
      if (((piVar1[3] & 0x108U) == 0) || (piVar7 = (int *)piVar1[1], piVar7 == (int *)0x0)) {
        if (param_4 <= piVar5) {
          if (((piVar1[3] & 0x108U) != 0) && (iVar2 = FUN_10004665(piVar1), iVar2 != 0)) {
LAB_10003eff:
            return (uint)((int)piVar6 - (int)piVar5) / param_2;
          }
          piVar7 = piVar5;
          if (param_4 != (int *)0x0) {
            piVar7 = (int *)((int)piVar5 - (uint)piVar5 % (uint)param_4);
          }
          piVar3 = (int *)FUN_10004886(piVar1[4],param_1,(uint)piVar7);
          if ((piVar3 == (int *)0xffffffff) ||
             (piVar5 = (int *)((int)piVar5 - (int)piVar3), piVar3 < piVar7)) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_10003eff;
          }
          goto LAB_10003eb6;
        }
        uVar4 = FUN_1000476e((int)*param_1,piVar1);
        if (uVar4 == 0xffffffff) goto LAB_10003eff;
        param_1 = param_1 + 1;
        param_4 = (int *)piVar1[6];
        piVar5 = (int *)((int)piVar5 - 1);
        if ((int)param_4 < 1) {
          param_4 = (int *)0x1;
        }
      }
      else {
        piVar3 = piVar5;
        if (piVar7 <= piVar5) {
          piVar3 = piVar7;
        }
        FUN_10004a80((undefined4 *)*piVar1,(undefined4 *)param_1,(uint)piVar3);
        piVar1[1] = piVar1[1] - (int)piVar3;
        *piVar1 = *piVar1 + (int)piVar3;
        piVar5 = (int *)((int)piVar5 - (int)piVar3);
LAB_10003eb6:
        param_1 = param_1 + (int)piVar3;
      }
    } while (piVar5 != (int *)0x0);
  }
  return param_3;
}


/*
 * FUN_10003f08 at 10003f08
 * undefined4 * __cdecl FUN_10003f08(LPCSTR param_1, char * param_2, uint param_3)
 * Address ranges: 10003f08-10003f38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * __cdecl FUN_10003f08(LPCSTR param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_10004f25();
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_10004db5(param_1,param_2,param_3,puVar1);
  FUN_100044da((uint)puVar1);
  return puVar2;
}


/*
 * FUN_10003f39 at 10003f39
 * undefined __cdecl FUN_10003f39(LPCSTR param_1, char * param_2)
 * Address ranges: 10003f39-10003f4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10003f39(LPCSTR param_1,char *param_2)

{
  FUN_10003f08(param_1,param_2,0x40);
  return;
}


/*
 * FUN_10003f4c at 10003f4c
 * undefined __cdecl FUN_10003f4c(undefined * param_1)
 * Address ranges: 10003f4c-10003fb5;10003fbf-1000400d;10004017-10004034
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10003f4c(undefined *param_1)

{
  uint *puVar1;
  int local_2c;
  uint *local_28;
  uint local_24;
  uint *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000c1d8;
  puStack_10 = &LAB_100062e0;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_101f5ab4 == 3) {
    ExceptionList = &local_14;
    FUN_10006171(9);
    local_8 = 0;
    local_20 = (uint *)FUN_100052af((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_100052da(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_10003fb6();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_101f5ab4 != 2) goto LAB_10004018;
    ExceptionList = &local_14;
    FUN_10006171(9);
    local_8 = 1;
    local_28 = (uint *)FUN_10005d14(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10005d6b(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_1000400e();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_10004018:
  HeapFree(DAT_101f5ab0,0,param_1);
  ExceptionList = local_14;
  return;
}


/*
 * FUN_10003fb6 at 10003fb6
 * undefined __stdcall FUN_10003fb6(void)
 * Address ranges: 10003fb6-10003fbe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10003fb6(void)

{
  FUN_100061d2(9);
  return;
}


/*
 * FUN_1000400e at 1000400e
 * undefined __stdcall FUN_1000400e(void)
 * Address ranges: 1000400e-10004016
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1000400e(void)

{
  FUN_100061d2(9);
  return;
}


/*
 * _malloc at 10004035
 * void * __cdecl _malloc(size_t _Size)
 * Address ranges: 10004035-10004046
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _malloc  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_100e3ae8);
  return pvVar1;
}


/*
 * __nh_malloc at 10004047
 * void * __cdecl __nh_malloc(size_t _Size, int _NhFlag)
 * Address ranges: 10004047-10004072
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __nh_malloc  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_10004073((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_100063b8(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}


/*
 * FUN_10004073 at 10004073
 * undefined __cdecl FUN_10004073(uint * param_1)
 * Address ranges: 10004073-100040d9;100040e3-10004135;10004142-1000416e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10004073(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000c1f0;
  puStack_10 = &LAB_100062e0;
  local_14 = ExceptionList;
  if (DAT_101f5ab4 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_101f5aac) {
      ExceptionList = &local_14;
      FUN_10006171(9);
      local_8 = 0;
      piVar1 = FUN_10005603(param_1);
      local_8 = 0xffffffff;
      FUN_100040da();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_101f5ab4 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_10010bbc) {
        ExceptionList = &local_14;
        FUN_10006171(9);
        local_8 = 1;
        piVar1 = FUN_10005db0(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_10004139();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_10004152;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_10004152:
  HeapAlloc(DAT_101f5ab0,0,dwBytes);
  ExceptionList = local_14;
  return;
}


/*
 * FUN_100040da at 100040da
 * undefined __stdcall FUN_100040da(void)
 * Address ranges: 100040da-100040e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_100040da(void)

{
  FUN_100061d2(9);
  return;
}


/*
 * FUN_10004139 at 10004139
 * undefined __stdcall FUN_10004139(void)
 * Address ranges: 10004139-10004141
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10004139(void)

{
  FUN_100061d2(9);
  return;
}


/*
 * FUN_1000416f at 1000416f
 * int __cdecl FUN_1000416f(int * param_1, byte * param_2)
 * Address ranges: 1000416f-100041aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_1000416f(int *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_10004488((uint)param_1);
  iVar1 = FUN_100063d3(param_1);
  iVar2 = FUN_1000648a(param_1,param_2,(undefined4 *)&stack0x0000000c);
  FUN_10006460(iVar1,param_1);
  FUN_100044da((uint)param_1);
  return iVar2;
}


/*
 * FUN_100041ab at 100041ab
 * undefined __stdcall FUN_100041ab(void)
 * Address ranges: 100041ab-100041c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100041ab(void)

{
  void *extraout_ECX;
  
  FUN_100041c3();
  _DAT_100e3a64 = FUN_10006ce4();
  FUN_10006c94(extraout_ECX);
  return;
}


/*
 * FUN_100041c3 at 100041c3
 * undefined __stdcall FUN_100041c3(void)
 * Address ranges: 100041c3-100041fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_100041c3(void)

{
  PTR___fptrap_10010c9c = &LAB_10006d67;
  PTR___fptrap_10010c98 = __cfltcvt;
  PTR___fptrap_10010ca0 = __fassign;
  PTR___fptrap_10010ca4 = FUN_10006d0d;
  PTR___fptrap_10010ca8 = &LAB_10006db5;
  PTR___fptrap_10010cac = __cfltcvt;
  return;
}


/*
 * __ftol at 100041fc
 * longlong __stdcall __ftol(void)
 * Address ranges: 100041fc-10004222
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __ftol  Library: Visual Studio
 */


/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}


/*
 * FUN_10004223 at 10004223
 * undefined4 __stdcall FUN_10004223(undefined4 param_1, int param_2)
 * Address ranges: 10004223-100042fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10004223(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_100e3afc = GetVersion();
    iVar1 = FUN_10005162(1);
    if (iVar1 != 0) {
      _DAT_100e3b08 = DAT_100e3afc >> 8 & 0xff;
      _DAT_100e3b04 = DAT_100e3afc & 0xff;
      DAT_100e3afc = DAT_100e3afc >> 0x10;
      _DAT_100e3b00 = _DAT_100e3b04 * 0x100 + _DAT_100e3b08;
      iVar1 = FUN_10007251();
      if (iVar1 != 0) {
        DAT_101f6ac4 = GetCommandLineA();
        DAT_100e3a6c = FUN_100078f3();
        FUN_100073dd();
        FUN_100076a6();
        FUN_100075ed();
        FUN_10007133();
        DAT_100e3a68 = DAT_100e3a68 + 1;
        goto LAB_100042f6;
      }
      FUN_100051bf();
    }
LAB_10004283:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_100e3a68 < 1) goto LAB_10004283;
      DAT_100e3a68 = DAT_100e3a68 + -1;
      if (DAT_100e3b34 == 0) {
        FUN_10007171();
      }
      FUN_10007599();
      FUN_100072a5();
      FUN_100051bf();
    }
    else if (param_2 == 3) {
      FUN_1000733d((undefined *)0x0);
    }
LAB_100042f6:
    uVar2 = 1;
  }
  return uVar2;
}


/*
 * entry at 100042fc
 * int __stdcall entry(undefined4 param_1, int param_2, undefined4 param_3)
 * Address ranges: 100042fc-10004398
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_100e3a68;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10004344;
    if ((DAT_101f6ac8 != (code *)0x0) &&
       (iVar2 = (*DAT_101f6ac8)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10004223(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10004344:
  iVar2 = FUN_10007a25();
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10004223(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10004223(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_101f6ac8 != (code *)0x0) {
      iVar2 = (*DAT_101f6ac8)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}


/*
 * __amsg_exit at 10004399
 * void __cdecl __amsg_exit(int param_1)
 * Address ranges: 10004399-100043c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_100e3a74 == 1) || ((DAT_100e3a74 == 0 && (DAT_100e3a78 == 1)))) {
    FUN_10007a2b();
  }
  FUN_10007a64(param_1);
  (*(code *)PTR___exit_1000e900)(0xff);
  return;
}


/*
 * FUN_10004488 at 10004488
 * undefined __cdecl FUN_10004488(uint param_1)
 * Address ranges: 10004488-100044b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10004488(uint param_1)

{
  if ((0x1000e907 < param_1) && (param_1 < 0x1000eb69)) {
    FUN_10006171(((int)(param_1 + 0xefff16f8) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


/*
 * FUN_100044b7 at 100044b7
 * undefined __cdecl FUN_100044b7(int param_1, int param_2)
 * Address ranges: 100044b7-100044d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100044b7(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10006171(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


/*
 * FUN_100044da at 100044da
 * undefined __cdecl FUN_100044da(uint param_1)
 * Address ranges: 100044da-10004508
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100044da(uint param_1)

{
  if ((0x1000e907 < param_1) && (param_1 < 0x1000eb69)) {
    FUN_100061d2(((int)(param_1 + 0xefff16f8) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


/*
 * FUN_10004509 at 10004509
 * undefined __cdecl FUN_10004509(int param_1, int param_2)
 * Address ranges: 10004509-1000452b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10004509(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_100061d2(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


/*
 * FUN_1000452c at 1000452c
 * undefined4 __cdecl FUN_1000452c(uint param_1)
 * Address ranges: 1000452c-10004588
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_1000452c(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_101f5a80) &&
     ((*(byte *)((&DAT_101f5980)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000805a(param_1);
    uVar1 = FUN_10004589(param_1);
    FUN_100080b9(param_1);
    return uVar1;
  }
  pDVar2 = FUN_10007de8();
  *pDVar2 = 9;
  pDVar2 = FUN_10007df1();
  *pDVar2 = 0;
  return 0xffffffff;
}


/*
 * FUN_10004589 at 10004589
 * undefined4 __cdecl FUN_10004589(uint param_1)
 * Address ranges: 10004589-1000460b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10004589(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_10008018(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_10008018(2);
      iVar2 = FUN_10008018(1);
      if (iVar2 == iVar1) goto LAB_100045d7;
    }
    hObject = (HANDLE)FUN_10008018(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_100045d9;
    }
  }
LAB_100045d7:
  DVar4 = 0;
LAB_100045d9:
  FUN_10007f99(param_1);
  *(undefined1 *)((&DAT_101f5980)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_10007d75(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


/*
 * __freebuf at 1000460c
 * void __cdecl __freebuf(FILE * _File)
 * Address ranges: 1000460c-10004636
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __freebuf  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_10003f4c(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}


/*
 * FUN_10004637 at 10004637
 * int __cdecl FUN_10004637(int * param_1)
 * Address ranges: 10004637-10004664
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10004637(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10004665(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_100080db(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


/*
 * FUN_10004665 at 10004665
 * undefined4 __cdecl FUN_10004665(int * param_1)
 * Address ranges: 10004665-100046c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10004665(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_10004886(param_1[4],(char *)param_1[2],uVar3);
      if (uVar1 == uVar3) {
        if ((param_1[3] & 0x80U) != 0) {
          param_1[3] = param_1[3] & 0xfffffffd;
        }
      }
      else {
        param_1[3] = param_1[3] | 0x20;
        uVar2 = 0xffffffff;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar2;
}


/*
 * FUN_100046ca at 100046ca
 * int __cdecl FUN_100046ca(int param_1)
 * Address ranges: 100046ca-1000476d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_100046ca(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_10006171(2);
  iVar4 = 0;
  if (0 < DAT_101f6ac0) {
    do {
      iVar2 = *(int *)(DAT_101f5ab8 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_100044b7(iVar4,iVar2);
        piVar1 = *(int **)(DAT_101f5ab8 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_10004637(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_10004637(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_10004509(iVar4,*(int *)(DAT_101f5ab8 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_101f6ac0);
  }
  FUN_100061d2(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}


/*
 * FUN_1000476e at 1000476e
 * uint __cdecl FUN_1000476e(uint param_1, int * param_2)
 * Address ranges: 1000476e-10004885
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_1000476e(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  byte bVar5;
  undefined3 extraout_var;
  undefined *puVar6;
  int *piVar7;
  
  piVar4 = param_2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  if (((uVar1 & 0x82) == 0) || ((uVar1 & 0x40) != 0)) {
LAB_1000487a:
    param_2[3] = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_1000487a;
      *param_2 = param_2[2];
      param_2[3] = uVar1 & 0xfffffffe;
    }
    uVar1 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar4[3] = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((piVar4 != (int *)&DAT_1000e928 && (piVar4 != (int *)&DAT_1000e948)) ||
        (bVar5 = FUN_1000828a(uVar2), CONCAT31(extraout_var,bVar5) == 0)))) {
      FUN_10008246(piVar4);
    }
    if ((*(ushort *)(piVar4 + 3) & 0x108) == 0) {
      piVar7 = (int *)0x1;
      param_2 = (int *)FUN_10004886(uVar2,(char *)&param_1,1);
    }
    else {
      pcVar3 = (char *)piVar4[2];
      piVar7 = (int *)(*piVar4 - (int)pcVar3);
      *piVar4 = (int)(pcVar3 + 1);
      piVar4[1] = piVar4[6] + -1;
      if ((int)piVar7 < 1) {
        if (uVar2 == 0xffffffff) {
          puVar6 = &DAT_10010cb8;
        }
        else {
          puVar6 = (undefined *)((&DAT_101f5980)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
        }
        if ((puVar6[4] & 0x20) != 0) {
          FUN_1000816e(uVar2,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_10004886(uVar2,pcVar3,(uint)piVar7);
      }
      *(undefined1 *)piVar4[2] = (undefined1)param_1;
    }
    if (param_2 == piVar7) {
      return param_1 & 0xff;
    }
    piVar4[3] = piVar4[3] | 0x20;
  }
  return 0xffffffff;
}


/*
 * FUN_10004886 at 10004886
 * int __cdecl FUN_10004886(uint param_1, char * param_2, uint param_3)
 * Address ranges: 10004886-100048ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10004886(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_101f5a80) &&
     ((*(byte *)((&DAT_101f5980)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000805a(param_1);
    iVar1 = FUN_100048eb(param_1,param_2,param_3);
    FUN_100080b9(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10007de8();
  *pDVar2 = 9;
  pDVar2 = FUN_10007df1();
  *pDVar2 = 0;
  return -1;
}


/*
 * FUN_100048eb at 100048eb
 * int __cdecl FUN_100048eb(DWORD param_1, char * param_2, uint param_3)
 * Address ranges: 100048eb-10004a75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_100048eb(DWORD param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  BOOL BVar6;
  DWORD *pDVar7;
  char local_418 [1028];
  int local_14;
  DWORD local_10;
  DWORD local_c;
  char *local_8;
  
  local_c = 0;
  local_14 = 0;
  if (param_3 == 0) {
LAB_10004904:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_101f5980 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_100081d3(param_1,0,2);
    }
    if ((*(byte *)((undefined4 *)(*piVar1 + iVar4) + 1) & 0x80) == 0) {
      BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar4),param_2,param_3,&local_10,(LPOVERLAPPED)0x0);
      if (BVar6 == 0) {
        param_1 = GetLastError();
      }
      else {
        local_c = local_10;
        param_1 = 0;
      }
LAB_100049d3:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_10004a45;
      if (param_1 == 5) {
        pDVar7 = FUN_10007de8();
        *pDVar7 = 9;
        pDVar7 = FUN_10007df1();
        *pDVar7 = 5;
      }
      else {
        FUN_10007d75(param_1);
      }
    }
    else {
      local_8 = param_2;
      param_1 = 0;
      if (param_3 != 0) {
        do {
          pcVar5 = local_418;
          do {
            if (param_3 <= (uint)((int)local_8 - (int)param_2)) break;
            pcVar2 = local_8 + 1;
            cVar3 = *local_8;
            local_8 = pcVar2;
            if (cVar3 == '\n') {
              local_14 = local_14 + 1;
              *pcVar5 = '\r';
              pcVar5 = pcVar5 + 1;
            }
            *pcVar5 = cVar3;
            pcVar5 = pcVar5 + 1;
          } while ((int)pcVar5 - (int)local_418 < 0x400);
          BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar4),local_418,(int)pcVar5 - (int)local_418,
                            &local_10,(LPOVERLAPPED)0x0);
          if (BVar6 == 0) {
            param_1 = GetLastError();
            goto LAB_100049d3;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_100049d3;
        } while( true );
      }
LAB_10004a45:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_10004904;
      pDVar7 = FUN_10007de8();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_10007df1();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}


/*
 * FUN_10004a80 at 10004a80
 * undefined4 * __cdecl FUN_10004a80(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * Address ranges: 10004a80-10004ada;10004adc-10004ae2;10004af0-10004b18;10004b1c-10004b3e;10004b40-10004b58;10004b7c-10004bc5;10004bd8-10004bde;10004be0-10004bea;10004bec-10004bfc;10004c00-10004c16;10004c18-10004c3d;10004c40-10004c48;10004c4c-10004c6a;10004c78-10004c94;10004c98-10004cbe;10004cc0-10004cf0;10004d14-10004d5d;10004d70-10004d76;10004d78-10004d84;10004d88-10004d9a;10004d9c-10004db4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * __cdecl FUN_10004a80(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_10004c37_caseD_2;
        case 3:
          goto switchD_10004c37_caseD_3;
        }
        goto switchD_10004c37_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10004c37_caseD_0;
      case 1:
        goto switchD_10004c37_caseD_1;
      case 2:
        goto switchD_10004c37_caseD_2;
      case 3:
        goto switchD_10004c37_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10004c37_caseD_2;
            case 3:
              goto switchD_10004c37_caseD_3;
            }
            goto switchD_10004c37_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10004c37_caseD_2;
            case 3:
              goto switchD_10004c37_caseD_3;
            }
            goto switchD_10004c37_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10004c37_caseD_2;
            case 3:
              goto switchD_10004c37_caseD_3;
            }
            goto switchD_10004c37_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_10004c37_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10004c37_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10004c37_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10004c37_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_10004ab5_caseD_2;
      case 3:
        goto switchD_10004ab5_caseD_3;
      }
      goto switchD_10004ab5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10004ab5_caseD_0;
    case 1:
      goto switchD_10004ab5_caseD_1;
    case 2:
      goto switchD_10004ab5_caseD_2;
    case 3:
      goto switchD_10004ab5_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10004ab5_caseD_2;
          case 3:
            goto switchD_10004ab5_caseD_3;
          }
          goto switchD_10004ab5_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10004ab5_caseD_2;
          case 3:
            goto switchD_10004ab5_caseD_3;
          }
          goto switchD_10004ab5_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10004ab5_caseD_2;
          case 3:
            goto switchD_10004ab5_caseD_3;
          }
          goto switchD_10004ab5_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_10004ab5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10004ab5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10004ab5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10004ab5_caseD_0:
  return param_1;
}


/*
 * FUN_10004db5 at 10004db5
 * undefined4 * __cdecl FUN_10004db5(LPCSTR param_1, char * param_2, uint param_3, undefined4 * param_4)
 * Address ranges: 10004db5-10004f24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_10004db5(LPCSTR param_1,char *param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  bVar4 = false;
  bVar3 = false;
  cVar1 = *param_2;
  if (cVar1 == 'a') {
    uVar5 = 0x109;
  }
  else {
    if (cVar1 == 'r') {
      uVar5 = 0;
      uVar6 = DAT_100e3c48 | 1;
      goto LAB_10004df6;
    }
    if (cVar1 != 'w') {
      return (undefined4 *)0x0;
    }
    uVar5 = 0x301;
  }
  uVar6 = DAT_100e3c48 | 2;
LAB_10004df6:
  bVar2 = true;
LAB_10004df9:
  cVar1 = param_2[1];
  param_2 = param_2 + 1;
  if ((cVar1 == '\0') || (!bVar2)) {
    uVar5 = FUN_100082b3(param_1,uVar5,param_3,0x1a4);
    if ((int)uVar5 < 0) {
      return (undefined4 *)0x0;
    }
    _DAT_100e3a7c = _DAT_100e3a7c + 1;
    param_4[3] = uVar6;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[2] = 0;
    param_4[7] = 0;
    param_4[4] = uVar5;
    return param_4;
  }
  if (cVar1 < 'U') {
    if (cVar1 == 'T') {
      if ((uVar5 & 0x1000) == 0) {
        uVar5 = uVar5 | 0x1000;
        goto LAB_10004df9;
      }
    }
    else if (cVar1 == '+') {
      if ((uVar5 & 2) == 0) {
        uVar5 = uVar5 & 0xfffffffe | 2;
        uVar6 = uVar6 & 0xfffffffc | 0x80;
        goto LAB_10004df9;
      }
    }
    else if (cVar1 == 'D') {
      if ((uVar5 & 0x40) == 0) {
        uVar5 = uVar5 | 0x40;
        goto LAB_10004df9;
      }
    }
    else if (cVar1 == 'R') {
      if (!bVar3) {
        bVar3 = true;
        uVar5 = uVar5 | 0x10;
        goto LAB_10004df9;
      }
    }
    else if ((cVar1 == 'S') && (!bVar3)) {
      bVar3 = true;
      uVar5 = uVar5 | 0x20;
      goto LAB_10004df9;
    }
  }
  else {
    if (cVar1 == 'b') {
      if ((uVar5 & 0xc000) != 0) goto LAB_10004ed9;
      uVar5 = uVar5 | 0x8000;
      goto LAB_10004df9;
    }
    if (cVar1 == 'c') {
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 | 0x4000;
        goto LAB_10004df9;
      }
    }
    else {
      if (cVar1 != 'n') {
        if ((cVar1 != 't') || ((uVar5 & 0xc000) != 0)) goto LAB_10004ed9;
        uVar5 = uVar5 | 0x4000;
        goto LAB_10004df9;
      }
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 & 0xffffbfff;
        goto LAB_10004df9;
      }
    }
  }
LAB_10004ed9:
  bVar2 = false;
  goto LAB_10004df9;
}


/*
 * FUN_10004f25 at 10004f25
 * undefined4 * __stdcall FUN_10004f25(void)
 * Address ranges: 10004f25-10004fec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * FUN_10004f25(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_10006171(2);
  iVar3 = 0;
  if (0 < DAT_101f6ac0) {
    do {
      iVar1 = *(int *)(DAT_101f5ab8 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        pvVar2 = _malloc(0x38);
        *(void **)(iVar3 + DAT_101f5ab8) = pvVar2;
        if (*(int *)(iVar3 + DAT_101f5ab8) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_101f5ab8) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_101f5ab8) + 0x20));
          puVar4 = *(undefined4 **)(iVar3 + DAT_101f5ab8);
LAB_10004fc9:
          if (puVar4 != (undefined4 *)0x0) {
            puVar4[4] = 0xffffffff;
            puVar4[1] = 0;
            puVar4[3] = 0;
            puVar4[2] = 0;
            *puVar4 = 0;
            puVar4[7] = 0;
          }
        }
        break;
      }
      if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
        FUN_100044b7(iVar3,iVar1);
        iVar1 = *(int *)(DAT_101f5ab8 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_101f5ab8 + iVar3 * 4);
          goto LAB_10004fc9;
        }
        FUN_10004509(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_101f6ac0);
  }
  FUN_100061d2(2);
  return puVar4;
}


/*
 * FUN_10004fed at 10004fed
 * undefined __cdecl FUN_10004fed(undefined4 * param_1)
 * Address ranges: 10004fed-10005019
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10004fed(undefined4 *param_1)

{
  int iVar1;
  HMODULE pHVar2;
  
  *param_1 = 0;
  pHVar2 = GetModuleHandleA((LPCSTR)0x0);
  if (((short)pHVar2->unused == 0x5a4d) && (iVar1 = pHVar2[0xf].unused, iVar1 != 0)) {
    *(undefined1 *)param_1 = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 2);
    *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 3);
  }
  return;
}


/*
 * FUN_1000501a at 1000501a
 * int __stdcall FUN_1000501a(void)
 * Address ranges: 1000501a-10005161
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_1000501a(void)

{
  char cVar1;
  byte bVar2;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *this;
  byte unaff_BL;
  char local_1230 [4240];
  char local_1a0 [260];
  DWORD local_9c;
  uint local_98;
  DWORD local_8c;
  CHAR aCStackY_18 [4];
  
  FUN_10008930();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = 't';
    aCStackY_18[1] = 'P';
    aCStackY_18[2] = '\0';
    aCStackY_18[3] = '\x10';
    DVar4 = GetEnvironmentVariableA("__MSVCRT_HEAP_SELECT",local_1230,0x1090);
    if (DVar4 != 0) {
      pcVar7 = local_1230;
      while (local_1230[0] != '\0') {
        cVar1 = *pcVar7;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *pcVar7 = cVar1 + -0x20;
        }
        pcVar7 = pcVar7 + 1;
        local_1230[0] = *pcVar7;
      }
      aCStackY_18[0] = -0x4e;
      aCStackY_18[1] = 'P';
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar5 == 0) {
        pcVar7 = local_1230;
      }
      else {
        aCStackY_18[0] = -0x2c;
        aCStackY_18[1] = 'P';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        GetModuleFileNameA((HMODULE)0x0,local_1a0,0x104);
        pcVar7 = local_1a0;
        while (local_1a0[0] != '\0') {
          cVar1 = *pcVar7;
          if (('`' < cVar1) && (cVar1 < '{')) {
            *pcVar7 = cVar1 + -0x20;
          }
          pcVar7 = pcVar7 + 1;
          local_1a0[0] = *pcVar7;
        }
        pcVar7 = _strstr(local_1230,local_1a0);
      }
      if ((pcVar7 != (char *)0x0) && (pcVar7 = _strchr(pcVar7,0x2c), pcVar7 != (char *)0x0)) {
        pbVar6 = (byte *)(pcVar7 + 1);
        bVar2 = *pbVar6;
        this = pbVar6;
        while (bVar2 != 0) {
          if (*this == 0x3b) {
            *this = 0;
          }
          else {
            this = this + 1;
          }
          bVar2 = *this;
        }
        aCStackY_18[0] = ':';
        aCStackY_18[1] = 'Q';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_10008582(this,pbVar6,(int *)0x0,(void *)0xa);
        if (iVar5 == 2) {
          return 2;
        }
        if (iVar5 == 3) {
          return 3;
        }
        if (iVar5 == 1) {
          return 1;
        }
      }
    }
    FUN_10004fed((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}


/*
 * FUN_10005162 at 10005162
 * undefined4 __cdecl FUN_10005162(int param_1)
 * Address ranges: 10005162-100051be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10005162(int param_1)

{
  undefined **ppuVar1;
  
  DAT_101f5ab0 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_101f5ab0 != (HANDLE)0x0) {
    DAT_101f5ab4 = FUN_1000501a();
    if (DAT_101f5ab4 == 3) {
      ppuVar1 = (undefined **)FUN_10005267(0x3f8);
    }
    else {
      if (DAT_101f5ab4 != 2) {
        return 1;
      }
      ppuVar1 = FUN_10005ab8();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_101f5ab0);
  }
  return 0;
}


/*
 * FUN_100051bf at 100051bf
 * undefined __stdcall FUN_100051bf(void)
 * Address ranges: 100051bf-10005266
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_100051bf(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_101f5ab4 == 3) {
    iVar1 = 0;
    if (0 < DAT_101f5aa4) {
      puVar2 = (undefined4 *)((int)DAT_101f5aa8 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_101f5ab0,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_101f5aa4);
    }
    HeapFree(DAT_101f5ab0,0,DAT_101f5aa8);
  }
  else if (DAT_101f5ab4 == 2) {
    ppuVar3 = &PTR_LOOP_1000eb98;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_1000eb98);
  }
  HeapDestroy(DAT_101f5ab0);
  return;
}


/*
 * FUN_10005267 at 10005267
 * undefined4 __cdecl FUN_10005267(undefined4 param_1)
 * Address ranges: 10005267-100052ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10005267(undefined4 param_1)

{
  DAT_101f5aa8 = HeapAlloc(DAT_101f5ab0,0,0x140);
  if (DAT_101f5aa8 == (LPVOID)0x0) {
    return 0;
  }
  DAT_101f5aa0 = 0;
  DAT_101f5aa4 = 0;
  DAT_101f5a9c = DAT_101f5aa8;
  DAT_101f5aac = param_1;
  DAT_101f5a94 = 0x10;
  return 1;
}


/*
 * FUN_100052af at 100052af
 * uint __cdecl FUN_100052af(int param_1)
 * Address ranges: 100052af-100052d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_100052af(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_101f5aa8;
  while( true ) {
    if (DAT_101f5aa8 + DAT_101f5aa4 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}


/*
 * FUN_100052da at 100052da
 * undefined __cdecl FUN_100052da(uint * param_1, int param_2)
 * Address ranges: 100052da-10005602
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100052da(uint *param_1,int param_2)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_8;
  
  uVar5 = param_1[4];
  puVar12 = (uint *)(param_2 + -4);
  uVar14 = param_2 - param_1[3] >> 0xf;
  piVar3 = (int *)(uVar14 * 0x204 + 0x144 + uVar5);
  uVar13 = *puVar12;
  local_8 = uVar13 - 1;
  if ((local_8 & 1) == 0) {
    uVar6 = *(uint *)(local_8 + (int)puVar12);
    uVar7 = *(uint *)(param_2 + -8);
    if ((uVar6 & 1) == 0) {
      uVar9 = ((int)uVar6 >> 4) - 1;
      if (0x3f < uVar9) {
        uVar9 = 0x3f;
      }
      if (*(int *)((int)puVar12 + uVar13 + 3) == *(int *)((int)puVar12 + uVar13 + 7)) {
        if (uVar9 < 0x20) {
          pcVar1 = (char *)(uVar9 + 4 + uVar5);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 & 0x1f));
          puVar10 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 & uVar9;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar9;
          }
        }
        else {
          pcVar1 = (char *)(uVar9 + 4 + uVar5);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 - 0x20 & 0x1f));
          puVar10 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 & uVar9;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar9;
          }
        }
      }
      local_8 = local_8 + uVar6;
      *(undefined4 *)(*(int *)((int)puVar12 + uVar13 + 7) + 4) =
           *(undefined4 *)((int)puVar12 + uVar13 + 3);
      *(undefined4 *)(*(int *)((int)puVar12 + uVar13 + 3) + 8) =
           *(undefined4 *)((int)puVar12 + uVar13 + 7);
    }
    puVar10 = (uint *)(((int)local_8 >> 4) - 1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    puVar11 = param_1;
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) - 1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) - 1);
      if ((uint *)0x3f < puVar10) {
        puVar10 = (uint *)0x3f;
      }
      if (puVar11 != puVar10) {
        if (puVar12[1] == puVar12[2]) {
          if (puVar11 < (uint *)0x20) {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 & 0x1f));
            puVar2 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
            *puVar2 = *puVar2 & uVar13;
            pcVar1 = (char *)((int)puVar11 + uVar5 + 4);
            *pcVar1 = *pcVar1 + -1;
            if (*pcVar1 == '\0') {
              *param_1 = *param_1 & uVar13;
            }
          }
          else {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 - 0x20 & 0x1f));
            puVar2 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
            *puVar2 = *puVar2 & uVar13;
            pcVar1 = (char *)((int)puVar11 + uVar5 + 4);
            *pcVar1 = *pcVar1 + -1;
            if (*pcVar1 == '\0') {
              param_1[1] = param_1[1] & uVar13;
            }
          }
        }
        *(uint *)(puVar12[2] + 4) = puVar12[1];
        *(uint *)(puVar12[1] + 8) = puVar12[2];
      }
    }
    if (((uVar7 & 1) != 0) || (puVar11 != puVar10)) {
      puVar12[1] = piVar3[(int)puVar10 * 2 + 1];
      puVar12[2] = (uint)(piVar3 + (int)puVar10 * 2);
      (piVar3 + (int)puVar10 * 2)[1] = (int)puVar12;
      *(uint **)(puVar12[1] + 8) = puVar12;
      if (puVar12[1] == puVar12[2]) {
        cVar4 = *(char *)((int)puVar10 + uVar5 + 4);
        *(char *)((int)puVar10 + uVar5 + 4) = cVar4 + '\x01';
        bVar8 = (byte)puVar10;
        if (puVar10 < (uint *)0x20) {
          if (cVar4 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar10 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          if (cVar4 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar10 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *puVar12 = local_8;
    *(uint *)((local_8 - 4) + (int)puVar12) = local_8;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      if (DAT_101f5aa0 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_101f5a98 * 0x8000 + DAT_101f5aa0[3]),0x8000,0x4000);
        DAT_101f5aa0[2] = DAT_101f5aa0[2] | 0x80000000U >> ((byte)DAT_101f5a98 & 0x1f);
        *(undefined4 *)(DAT_101f5aa0[4] + 0xc4 + DAT_101f5a98 * 4) = 0;
        *(char *)(DAT_101f5aa0[4] + 0x43) = *(char *)(DAT_101f5aa0[4] + 0x43) + -1;
        if (*(char *)(DAT_101f5aa0[4] + 0x43) == '\0') {
          DAT_101f5aa0[1] = DAT_101f5aa0[1] & 0xfffffffe;
        }
        if (DAT_101f5aa0[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_101f5aa0[3],0,0x8000);
          HeapFree(DAT_101f5ab0,0,(LPVOID)DAT_101f5aa0[4]);
          FUN_10008960(DAT_101f5aa0,DAT_101f5aa0 + 5,
                       (DAT_101f5aa4 * 0x14 - (int)DAT_101f5aa0) + -0x14 + DAT_101f5aa8);
          DAT_101f5aa4 = DAT_101f5aa4 + -1;
          if (DAT_101f5aa0 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_101f5a9c = DAT_101f5aa8;
        }
      }
      DAT_101f5aa0 = param_1;
      DAT_101f5a98 = uVar14;
    }
  }
  return;
}


/*
 * FUN_10005603 at 10005603
 * int * __cdecl FUN_10005603(uint * param_1)
 * Address ranges: 10005603-1000590b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * __cdecl FUN_10005603(uint *param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar8 = DAT_101f5aa8 + DAT_101f5aa4 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_101f5a9c;
  if (iVar7 < 0x20) {
    local_10 = 0xffffffff >> (bVar5 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    local_c = 0xffffffff >> (bVar5 - 0x20 & 0x1f);
    local_10 = 0;
  }
  for (; (param_1 < puVar8 && ((param_1[1] & local_c) == 0 && (*param_1 & local_10) == 0));
      param_1 = param_1 + 5) {
  }
  puVar11 = DAT_101f5aa8;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_101f5a9c && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_101f5a9c) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_101f5aa8;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_101f5a9c && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_101f5a9c) && (param_1 = FUN_1000590c(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_100059bd((int)param_1);
      *(int *)param_1[4] = iVar7;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar4 = (int *)param_1[4];
  local_8 = *piVar4;
  if ((local_8 == -1) ||
     ((piVar4[local_8 + 0x31] & local_c) == 0 && (piVar4[local_8 + 0x11] & local_10) == 0)) {
    local_8 = 0;
    puVar8 = (uint *)(piVar4 + 0x11);
    if ((piVar4[0x31] & local_c) == 0 && (piVar4[0x11] & local_10) == 0) {
      do {
        puVar11 = puVar8 + 0x21;
        local_8 = local_8 + 1;
        puVar8 = puVar8 + 1;
      } while ((*puVar11 & local_c) == 0 && (local_10 & *puVar8) == 0);
    }
  }
  iVar7 = 0;
  piVar2 = piVar4 + local_8 * 0x81 + 0x51;
  local_10 = piVar4[local_8 + 0x11] & local_10;
  if (local_10 == 0) {
    local_10 = piVar4[local_8 + 0x31] & local_c;
    iVar7 = 0x20;
  }
  for (; -1 < (int)local_10; local_10 = local_10 << 1) {
    iVar7 = iVar7 + 1;
  }
  piVar10 = (int *)piVar2[iVar7 * 2 + 1];
  iVar9 = *piVar10 - uVar6;
  iVar14 = (iVar9 >> 4) + -1;
  if (0x3f < iVar14) {
    iVar14 = 0x3f;
  }
  DAT_101f5a9c = param_1;
  if (iVar14 != iVar7) {
    if (piVar10[1] == piVar10[2]) {
      if (iVar7 < 0x20) {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 & 0x1f));
        piVar4[local_8 + 0x11] = uVar13 & piVar4[local_8 + 0x11];
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar13;
        }
      }
      else {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 - 0x20 & 0x1f));
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] & uVar13;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar13;
        }
      }
    }
    *(int *)(piVar10[2] + 4) = piVar10[1];
    *(int *)(piVar10[1] + 8) = piVar10[2];
    if (iVar9 == 0) goto LAB_100058c9;
    piVar10[1] = piVar2[iVar14 * 2 + 1];
    piVar10[2] = (int)(piVar2 + iVar14 * 2);
    (piVar2 + iVar14 * 2)[1] = (int)piVar10;
    *(int **)(piVar10[1] + 8) = piVar10;
    if (piVar10[1] == piVar10[2]) {
      cVar3 = *(char *)(iVar14 + 4 + (int)piVar4);
      bVar5 = (byte)iVar14;
      if (iVar14 < 0x20) {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar5 & 0x1f);
        }
        piVar4[local_8 + 0x11] = piVar4[local_8 + 0x11] | 0x80000000U >> (bVar5 & 0x1f);
      }
      else {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
        }
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar9 != 0) {
    *piVar10 = iVar9;
    *(int *)(iVar9 + -4 + (int)piVar10) = iVar9;
  }
LAB_100058c9:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_101f5aa0)) && (local_8 == DAT_101f5a98)) {
    DAT_101f5aa0 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}


/*
 * FUN_1000590c at 1000590c
 * undefined4 * __stdcall FUN_1000590c(void)
 * Address ranges: 1000590c-100059bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * FUN_1000590c(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_101f5aa4 == DAT_101f5a94) {
    pvVar2 = HeapReAlloc(DAT_101f5ab0,0,DAT_101f5aa8,(DAT_101f5a94 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_101f5a94 = DAT_101f5a94 + 0x10;
    DAT_101f5aa8 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_101f5aa8 + DAT_101f5aa4 * 0x14);
  pvVar2 = HeapAlloc(DAT_101f5ab0,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_101f5aa4 = DAT_101f5aa4 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_101f5ab0,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}


/*
 * FUN_100059bd at 100059bd
 * int __cdecl FUN_100059bd(int param_1)
 * Address ranges: 100059bd-10005ab7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_100059bd(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LPVOID pvVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *lpAddress;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar9 = 0;
  for (iVar4 = *(int *)(param_1 + 8); -1 < iVar4; iVar4 = iVar4 << 1) {
    iVar9 = iVar9 + 1;
  }
  iVar8 = 0x3f;
  iVar4 = iVar9 * 0x204 + 0x144 + iVar3;
  iVar5 = iVar4;
  do {
    *(int *)(iVar5 + 8) = iVar5;
    *(int *)(iVar5 + 4) = iVar5;
    iVar5 = iVar5 + 8;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  lpAddress = (int *)(iVar9 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar6 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar6 == (LPVOID)0x0) {
    iVar9 = -1;
  }
  else {
    if (lpAddress <= lpAddress + 0x1c00) {
      piVar7 = lpAddress + 4;
      do {
        piVar7[-2] = -1;
        piVar7[0x3fb] = -1;
        piVar7[-1] = 0xff0;
        *piVar7 = (int)(piVar7 + 0x3ff);
        piVar7[1] = (int)(piVar7 + -0x401);
        piVar7[0x3fa] = 0xff0;
        piVar1 = piVar7 + 0x3fc;
        piVar7 = piVar7 + 0x400;
      } while (piVar1 <= lpAddress + 0x1c00);
    }
    *(int **)(iVar4 + 0x1fc) = lpAddress + 3;
    lpAddress[5] = iVar4 + 0x1f8;
    *(int **)(iVar4 + 0x200) = lpAddress + 0x1c03;
    lpAddress[0x1c04] = iVar4 + 0x1f8;
    *(undefined4 *)(iVar3 + 0x44 + iVar9 * 4) = 0;
    *(undefined4 *)(iVar3 + 0xc4 + iVar9 * 4) = 1;
    cVar2 = *(char *)(iVar3 + 0x43);
    *(char *)(iVar3 + 0x43) = cVar2 + '\x01';
    if (cVar2 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar9 & 0x1f));
  }
  return iVar9;
}


/*
 * FUN_10005ab8 at 10005ab8
 * undefined * * __stdcall FUN_10005ab8(void)
 * Address ranges: 10005ab8-10005bfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined ** FUN_10005ab8(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_1000eba8 == -1) {
    lpMem = &PTR_LOOP_1000eb98;
  }
  else {
    lpMem = HeapAlloc(DAT_101f5ab0,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_1000eb98) {
        if (PTR_LOOP_1000eb98 == (undefined *)0x0) {
          PTR_LOOP_1000eb98 = (undefined *)&PTR_LOOP_1000eb98;
        }
        if (PTR_LOOP_1000eb9c == (undefined *)0x0) {
          PTR_LOOP_1000eb9c = (undefined *)&PTR_LOOP_1000eb98;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_1000eb98;
        lpMem[1] = PTR_LOOP_1000eb9c;
        PTR_LOOP_1000eb9c = (undefined *)lpMem;
        *(undefined ***)lpMem[1] = lpMem;
      }
      lpMem[5] = (undefined *)(lpAddress + 0x100000);
      ppuVar3 = lpMem + 6;
      lpMem[3] = (undefined *)(lpMem + 0x26);
      lpMem[4] = (undefined *)lpAddress;
      lpMem[2] = (undefined *)ppuVar3;
      iVar4 = 0;
      do {
        bVar1 = 0xf < iVar4;
        iVar4 = iVar4 + 1;
        *ppuVar3 = (undefined *)((bVar1 - 1 & 0xf1) - 1);
        ppuVar3[1] = (undefined *)0xf1;
        ppuVar3 = ppuVar3 + 2;
      } while (iVar4 < 0x400);
      _memset(lpAddress,0,0x10000);
      for (; lpAddress < lpMem[4] + 0x10000; lpAddress = lpAddress + 0x400) {
        *(undefined1 *)(lpAddress + 0x3e) = 0xff;
        *lpAddress = (int)(lpAddress + 2);
        lpAddress[1] = 0xf0;
      }
      return lpMem;
    }
    VirtualFree(lpAddress,0,0x8000);
  }
  if (lpMem != &PTR_LOOP_1000eb98) {
    HeapFree(DAT_101f5ab0,0,lpMem);
  }
  return (undefined **)0x0;
}


/*
 * FUN_10005bfc at 10005bfc
 * undefined __cdecl FUN_10005bfc(undefined * * param_1)
 * Address ranges: 10005bfc-10005c51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10005bfc(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_10010bb8 == param_1) {
    PTR_LOOP_10010bb8 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_1000eb98) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_101f5ab0,0,param_1);
    return;
  }
  DAT_1000eba8 = 0xffffffff;
  return;
}


/*
 * FUN_10005c52 at 10005c52
 * undefined __cdecl FUN_10005c52(int param_1)
 * Address ranges: 10005c52-10005d13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10005c52(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_1000eb9c;
  do {
    ppuVar5 = ppuVar4;
    if (ppuVar4[4] != (undefined *)0xffffffff) {
      local_8 = 0;
      ppuVar5 = ppuVar4 + 0x804;
      iVar3 = 0x3ff000;
      do {
        if (*ppuVar5 == (undefined *)0xf0) {
          BVar1 = VirtualFree(ppuVar4[4] + iVar3,0x1000,0x4000);
          if (BVar1 != 0) {
            *ppuVar5 = (undefined *)0xffffffff;
            DAT_100e3a80 = DAT_100e3a80 + -1;
            if (((undefined **)ppuVar4[3] == (undefined **)0x0) || (ppuVar5 < ppuVar4[3])) {
              ppuVar4[3] = (undefined *)ppuVar5;
            }
            local_8 = local_8 + 1;
            param_1 = param_1 + -1;
            if (param_1 == 0) break;
          }
        }
        iVar3 = iVar3 + -0x1000;
        ppuVar5 = ppuVar5 + -2;
      } while (-1 < iVar3);
      ppuVar5 = (undefined **)ppuVar4[1];
      if ((local_8 != 0) && (ppuVar4[6] == (undefined *)0xffffffff)) {
        ppuVar2 = ppuVar4 + 8;
        iVar3 = 1;
        do {
          if (*ppuVar2 != (undefined *)0xffffffff) break;
          iVar3 = iVar3 + 1;
          ppuVar2 = ppuVar2 + 2;
        } while (iVar3 < 0x400);
        if (iVar3 == 0x400) {
          FUN_10005bfc(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_1000eb9c) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}


/*
 * FUN_10005d14 at 10005d14
 * int __cdecl FUN_10005d14(undefined * param_1, undefined4 * param_2, uint * param_3)
 * Address ranges: 10005d14-10005d6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10005d14(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_1000eb98;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_1000eb98) {
      return 0;
    }
  }
  if (((uint)param_1 & 0xf) != 0) {
    return 0;
  }
  if (((uint)param_1 & 0xfff) < 0x100) {
    return 0;
  }
  *param_2 = ppuVar1;
  uVar2 = (uint)param_1 & 0xfffff000;
  *param_3 = uVar2;
  return ((int)(param_1 + (-0x100 - uVar2)) >> 4) + 8 + uVar2;
}


/*
 * FUN_10005d6b at 10005d6b
 * undefined __cdecl FUN_10005d6b(int param_1, int param_2, byte * param_3)
 * Address ranges: 10005d6b-10005daf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10005d6b(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_100e3a80 = DAT_100e3a80 + 1, DAT_100e3a80 == 0x20)) {
    FUN_10005c52(0x10);
  }
  return;
}


/*
 * FUN_10005db0 at 10005db0
 * int * __cdecl FUN_10005db0(uint param_1)
 * Address ranges: 10005db0-10005fb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_10005db0(uint param_1)

{
  uint *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  undefined **ppuVar6;
  int *piVar7;
  uint *puVar8;
  undefined **ppuVar9;
  int local_8;
  
  piVar7 = (int *)PTR_LOOP_10010bb8;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_10005fb8(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_10005e7b;
            puVar8[1] = param_1;
          }
          puVar8 = puVar8 + 2;
          piVar4 = piVar4 + 0x400;
        } while (puVar8 < piVar7 + 0x806);
      }
      puVar1 = (uint *)piVar7[2];
      piVar4 = (int *)piVar7[4];
      for (puVar8 = (uint *)(piVar7 + 6); puVar8 < puVar1; puVar8 = puVar8 + 2) {
        if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
          piVar5 = (int *)FUN_10005fb8(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_10005e7b:
            PTR_LOOP_10010bb8 = (undefined *)piVar7;
            *puVar8 = *puVar8 - param_1;
            piVar7[2] = (int)puVar8;
            return piVar5;
          }
          puVar8[1] = param_1;
        }
        piVar4 = piVar4 + 0x400;
      }
    }
    piVar7 = (int *)*piVar7;
    if (piVar7 == (int *)PTR_LOOP_10010bb8) {
      ppuVar9 = &PTR_LOOP_1000eb98;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_1000eb98) {
          ppuVar9 = FUN_10005ab8();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_10010bb8 = (undefined *)ppuVar9;
          *piVar7 = (int)piVar7 + param_1 + 8;
          piVar7[1] = 0xf0 - param_1;
          ppuVar9[6] = ppuVar9[6] + -(param_1 & 0xff);
          return piVar7 + 0x40;
        }
      }
      ppuVar2 = (undefined **)ppuVar9[3];
      local_8 = 0;
      piVar7 = (int *)(ppuVar9[4] + ((int)ppuVar2 + (-0x18 - (int)ppuVar9) >> 3) * 0x1000);
      puVar3 = *ppuVar2;
      ppuVar6 = ppuVar2;
      for (; (puVar3 == (undefined *)0xffffffff && (local_8 < 0x10)); local_8 = local_8 + 1) {
        ppuVar6 = ppuVar6 + 2;
        puVar3 = *ppuVar6;
      }
      piVar4 = VirtualAlloc(piVar7,local_8 << 0xc,0x1000,4);
      if (piVar4 != piVar7) {
        return (int *)0x0;
      }
      _memset(piVar7,local_8 << 0xc,0);
      ppuVar6 = ppuVar2;
      if (0 < local_8) {
        piVar4 = piVar7 + 1;
        do {
          *(undefined1 *)(piVar4 + 0x3d) = 0xff;
          piVar4[-1] = (int)(piVar4 + 1);
          *piVar4 = 0xf0;
          *ppuVar6 = (undefined *)0xf0;
          ppuVar6[1] = (undefined *)0xf1;
          piVar4 = piVar4 + 0x400;
          ppuVar6 = ppuVar6 + 2;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      for (; (ppuVar6 < ppuVar9 + 0x806 && (*ppuVar6 != (undefined *)0xffffffff));
          ppuVar6 = ppuVar6 + 2) {
      }
      PTR_LOOP_10010bb8 = (undefined *)ppuVar9;
      ppuVar9[3] = (undefined *)(-(uint)(ppuVar6 < ppuVar9 + 0x806) & (uint)ppuVar6);
      *(char *)(piVar7 + 2) = (char)param_1;
      ppuVar9[2] = (undefined *)ppuVar2;
      *ppuVar2 = *ppuVar2 + -param_1;
      piVar7[1] = piVar7[1] - param_1;
      *piVar7 = (int)piVar7 + param_1 + 8;
      return piVar7 + 0x40;
    }
  } while( true );
}


/*
 * FUN_10005fb8 at 10005fb8
 * int __cdecl FUN_10005fb8(int * param_1, uint param_2, uint param_3)
 * Address ranges: 10005fb8-100060db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10005fb8(int *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar2 = (byte *)*param_1;
  pbVar1 = (byte *)(param_1 + 0x3e);
  bVar3 = (byte)param_3;
  if ((uint)param_1[1] < param_3) {
    pbVar6 = pbVar2;
    if (pbVar2[param_1[1]] != 0) {
      pbVar6 = pbVar2 + param_1[1];
    }
    while( true ) {
      while( true ) {
        if (pbVar1 <= pbVar6 + param_3) {
          pbVar6 = (byte *)(param_1 + 2);
          while( true ) {
            while( true ) {
              if (pbVar2 <= pbVar6) {
                return 0;
              }
              if (pbVar1 <= pbVar6 + param_3) {
                return 0;
              }
              if (*pbVar6 == 0) break;
              pbVar6 = pbVar6 + *pbVar6;
            }
            uVar5 = 1;
            pbVar4 = pbVar6;
            while (pbVar4 = pbVar4 + 1, *pbVar4 == 0) {
              uVar5 = uVar5 + 1;
            }
            if (param_3 <= uVar5) break;
            param_2 = param_2 - uVar5;
            pbVar6 = pbVar4;
            if (param_2 < param_3) {
              return 0;
            }
          }
          if (pbVar6 + param_3 < pbVar1) {
            *param_1 = (int)(pbVar6 + param_3);
            param_1[1] = uVar5 - param_3;
          }
          else {
            param_1[1] = 0;
            *param_1 = (int)(param_1 + 2);
          }
          *pbVar6 = bVar3;
          pbVar2 = pbVar6 + 8;
          goto LAB_100060cb;
        }
        if (*pbVar6 == 0) break;
        pbVar6 = pbVar6 + *pbVar6;
      }
      uVar5 = 1;
      pbVar4 = pbVar6;
      while (pbVar4 = pbVar4 + 1, *pbVar4 == 0) {
        uVar5 = uVar5 + 1;
      }
      if (param_3 <= uVar5) break;
      if (pbVar6 == pbVar2) {
        param_1[1] = uVar5;
        pbVar6 = pbVar4;
      }
      else {
        param_2 = param_2 - uVar5;
        pbVar6 = pbVar4;
        if (param_2 < param_3) {
          return 0;
        }
      }
    }
    if (pbVar6 + param_3 < pbVar1) {
      *param_1 = (int)(pbVar6 + param_3);
      param_1[1] = uVar5 - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    *pbVar6 = bVar3;
    pbVar2 = pbVar6 + 8;
  }
  else {
    *pbVar2 = bVar3;
    if (pbVar2 + param_3 < pbVar1) {
      *param_1 = *param_1 + param_3;
      param_1[1] = param_1[1] - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    pbVar2 = pbVar2 + 8;
  }
LAB_100060cb:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}


/*
 * FUN_100060dc at 100060dc
 * undefined __stdcall FUN_100060dc(void)
 * Address ranges: 100060dc-10006104
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_100060dc(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010c04);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010bf4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010be4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010bc4);
  return;
}


/*
 * FUN_10006105 at 10006105
 * undefined __stdcall FUN_10006105(void)
 * Address ranges: 10006105-10006170
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10006105(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10010bc0;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_10010c04)) && (ppuVar1 != &PTR_DAT_10010bf4)) &&
       ((ppuVar1 != &PTR_DAT_10010be4 && (ppuVar1 != &PTR_DAT_10010bc4)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10003f4c(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10010c80);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010be4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010bf4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010c04);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010bc4);
  return;
}


/*
 * FUN_10006171 at 10006171
 * undefined __cdecl FUN_10006171(int param_1)
 * Address ranges: 10006171-100061d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10006171(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10010bc0 + param_1;
  if ((&DAT_10010bc0)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10006171(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_10003f4c((undefined *)lpCriticalSection);
    }
    FUN_100061d2(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}


/*
 * FUN_100061d2 at 100061d2
 * undefined __cdecl FUN_100061d2(int param_1)
 * Address ranges: 100061d2-100061e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100061d2(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10010bc0)[param_1]);
  return;
}


/*
 * __global_unwind2 at 100061e8
 * undefined __cdecl __global_unwind2(PVOID param_1)
 * Address ranges: 100061e8-10006207
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __global_unwind2  Library: Visual Studio
 */


/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10006200,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


/*
 * __local_unwind2 at 1000622a
 * undefined __cdecl __local_unwind2(int param_1, int param_2)
 * Address ranges: 1000622a-10006291
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __local_unwind2  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_10006208;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_100062be();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}


/*
 * FUN_100062be at 100062be
 * undefined __stdcall FUN_100062be(void)
 * Address ranges: 100062be-100062d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_100062be(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_10010c88 = *(undefined4 *)(unaff_EBP + 8);
  DAT_10010c84 = in_EAX;
  DAT_10010c8c = unaff_EBP;
  return;
}


/*
 * FUN_1000639d at 1000639d
 * undefined __stdcall FUN_1000639d(int param_1)
 * Address ranges: 1000639d-100063b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1000639d(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}


/*
 * FUN_100063b8 at 100063b8
 * undefined4 __cdecl FUN_100063b8(undefined4 param_1)
 * Address ranges: 100063b8-100063d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_100063b8(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_100e3aec != (code *)0x0) {
    iVar1 = (*DAT_100e3aec)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/*
 * FUN_100063d3 at 100063d3
 * undefined4 __cdecl FUN_100063d3(undefined4 * param_1)
 * Address ranges: 100063d3-1000645f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100063d3(undefined4 *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined3 extraout_var;
  int iVar3;
  void *pvVar4;
  
  bVar2 = FUN_1000828a(param_1[4]);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)&DAT_1000e928) {
    iVar3 = 0;
  }
  else {
    if (param_1 != (undefined4 *)&DAT_1000e948) {
      return 0;
    }
    iVar3 = 1;
  }
  _DAT_100e3a7c = _DAT_100e3a7c + 1;
  if ((*(ushort *)(param_1 + 3) & 0x10c) != 0) {
    return 0;
  }
  if ((&DAT_100e3af0)[iVar3] == 0) {
    pvVar4 = _malloc(0x1000);
    (&DAT_100e3af0)[iVar3] = pvVar4;
    if (pvVar4 == (void *)0x0) {
      param_1[2] = param_1 + 5;
      *param_1 = param_1 + 5;
      param_1[6] = 2;
      param_1[1] = 2;
      goto LAB_1000644f;
    }
  }
  uVar1 = (&DAT_100e3af0)[iVar3];
  param_1[6] = 0x1000;
  param_1[2] = uVar1;
  *param_1 = uVar1;
  param_1[1] = 0x1000;
LAB_1000644f:
  *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x1102;
  return 1;
}


/*
 * FUN_10006460 at 10006460
 * undefined __cdecl FUN_10006460(int param_1, int * param_2)
 * Address ranges: 10006460-10006489
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10006460(int param_1,int *param_2)

{
  if ((param_1 != 0) && ((*(byte *)((int)param_2 + 0xd) & 0x10) != 0)) {
    FUN_10004665(param_2);
    *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) & 0xee;
    param_2[6] = 0;
    *param_2 = 0;
    param_2[2] = 0;
  }
  return;
}


/*
 * FUN_1000648a at 1000648a
 * int __cdecl FUN_1000648a(int * param_1, byte * param_2, undefined4 * param_3)
 * Address ranges: 1000648a-10006baa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_1000648a(int *param_1,byte *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  uint uVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  undefined4 uVar5;
  short *psVar6;
  int *piVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined1 local_24c [511];
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  CHAR local_3c [4];
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char local_1a;
  char local_19;
  int local_18;
  int local_14;
  undefined1 *local_10;
  WCHAR *local_c;
  uint local_8;
  
  local_34 = 0;
  bVar9 = *param_2;
  local_10 = (undefined1 *)0x0;
  local_18 = 0;
  pbVar1 = param_2;
  do {
    if ((bVar9 == 0) || (param_2 = pbVar1 + 1, local_18 < 0)) {
      return local_18;
    }
    if (((char)bVar9 < ' ') || ('x' < (char)bVar9)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (byte)"__GLOBAL_HEAP_SELECTED"[(char)bVar9 + 0x10] & 0xf;
    }
    local_34 = (int)(char)(&DAT_1000c238)[uVar2 * 8 + local_34] >> 4;
    switch(local_34) {
    case 0:
switchD_100064f8_caseD_0:
      local_28 = 0;
      if ((PTR_DAT_10010ee0[(uint)bVar9 * 2 + 1] & 0x80) != 0) {
        FUN_10006bcb((int)(char)bVar9,param_1,&local_18);
        bVar9 = *param_2;
        param_2 = pbVar1 + 2;
      }
      FUN_10006bcb((int)(char)bVar9,param_1,&local_18);
      break;
    case 1:
      local_14 = -1;
      local_38 = 0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_8 = 0;
      local_28 = 0;
      break;
    case 2:
      if (bVar9 == 0x20) {
        local_8 = local_8 | 2;
      }
      else if (bVar9 == 0x23) {
        local_8 = local_8 | 0x80;
      }
      else if (bVar9 == 0x2b) {
        local_8 = local_8 | 1;
      }
      else if (bVar9 == 0x2d) {
        local_8 = local_8 | 4;
      }
      else if (bVar9 == 0x30) {
        local_8 = local_8 | 8;
      }
      break;
    case 3:
      if (bVar9 == 0x2a) {
        local_24 = FUN_10006c69((int *)&param_3);
        if (local_24 < 0) {
          local_8 = local_8 | 4;
          local_24 = -local_24;
        }
      }
      else {
        local_24 = (char)bVar9 + -0x30 + local_24 * 10;
      }
      break;
    case 4:
      local_14 = 0;
      break;
    case 5:
      if (bVar9 == 0x2a) {
        local_14 = FUN_10006c69((int *)&param_3);
        if (local_14 < 0) {
          local_14 = -1;
        }
      }
      else {
        local_14 = (char)bVar9 + -0x30 + local_14 * 10;
      }
      break;
    case 6:
      if (bVar9 == 0x49) {
        if ((*param_2 != 0x36) || (pbVar1[2] != 0x34)) {
          local_34 = 0;
          goto switchD_100064f8_caseD_0;
        }
        param_2 = pbVar1 + 3;
        local_8 = local_8 | 0x8000;
      }
      else if (bVar9 == 0x68) {
        local_8 = local_8 | 0x20;
      }
      else if (bVar9 == 0x6c) {
        local_8 = local_8 | 0x10;
      }
      else if (bVar9 == 0x77) {
        local_8 = local_8 | 0x800;
      }
      break;
    case 7:
      pWVar4 = local_c;
      if ((char)bVar9 < 'h') {
        if ((char)bVar9 < 'e') {
          if ((char)bVar9 < 'Y') {
            if (bVar9 == 0x58) {
LAB_10006909:
              local_30 = 7;
LAB_10006910:
              local_10 = (undefined1 *)0x10;
              if ((local_8 & 0x80) != 0) {
                local_1a = '0';
                local_19 = (char)local_30 + 'Q';
                local_20 = 2;
              }
              goto LAB_1000697a;
            }
            if (bVar9 != 0x43) {
              if ((bVar9 != 0x45) && (bVar9 != 0x47)) {
                if (bVar9 == 0x53) {
                  if ((local_8 & 0x830) == 0) {
                    local_8 = local_8 | 0x800;
                  }
                  goto LAB_100066b7;
                }
                goto LAB_10006a94;
              }
              local_38 = 1;
              bVar9 = bVar9 + 0x20;
              goto LAB_10006718;
            }
            if ((local_8 & 0x830) == 0) {
              local_8 = local_8 | 0x800;
            }
LAB_10006745:
            if ((local_8 & 0x810) == 0) {
              uVar5 = FUN_10006c69((int *)&param_3);
              local_24c[0] = (char)uVar5;
              local_10 = (undefined1 *)0x1;
            }
            else {
              uVar5 = FUN_10006c86((int *)&param_3);
              local_10 = (undefined1 *)FUN_10008d7b(local_24c,(WCHAR)uVar5);
              if ((int)local_10 < 0) {
                local_2c = 1;
              }
            }
            pWVar4 = (WCHAR *)local_24c;
          }
          else if (bVar9 == 0x5a) {
            psVar6 = (short *)FUN_10006c69((int *)&param_3);
            if ((psVar6 == (short *)0x0) ||
               (pWVar4 = *(WCHAR **)(psVar6 + 2), pWVar4 == (WCHAR *)0x0)) {
              local_c = (WCHAR *)PTR_DAT_10010c90;
              pWVar4 = (WCHAR *)PTR_DAT_10010c90;
              goto LAB_1000688a;
            }
            if ((local_8 & 0x800) == 0) {
              local_28 = 0;
              local_10 = (undefined1 *)(int)*psVar6;
            }
            else {
              local_28 = 1;
              local_10 = (undefined1 *)((uint)(int)*psVar6 >> 1);
            }
          }
          else {
            if (bVar9 == 99) goto LAB_10006745;
            if (bVar9 == 100) goto LAB_1000696f;
          }
        }
        else {
LAB_10006718:
          local_8 = local_8 | 0x40;
          pWVar4 = (WCHAR *)local_24c;
          if (local_14 < 0) {
            local_14 = 6;
          }
          else if ((local_14 == 0) && (bVar9 == 0x67)) {
            local_14 = 1;
          }
          local_4c = *param_3;
          local_48 = param_3[1];
          param_3 = param_3 + 2;
          local_c = pWVar4;
          (*(code *)PTR___fptrap_10010c98)(&local_4c,local_24c,(int)(char)bVar9,local_14,local_38);
          uVar2 = local_8 & 0x80;
          if ((uVar2 != 0) && (local_14 == 0)) {
            (*(code *)PTR___fptrap_10010ca4)(local_24c);
          }
          if ((bVar9 == 0x67) && (uVar2 == 0)) {
            (*(code *)PTR___fptrap_10010c9c)(local_24c);
          }
          if (local_24c[0] == '-') {
            local_8 = local_8 | 0x100;
            pWVar4 = (WCHAR *)(local_24c + 1);
            local_c = pWVar4;
          }
LAB_1000688a:
          local_10 = (undefined1 *)_strlen((char *)pWVar4);
          pWVar4 = local_c;
        }
      }
      else {
        if (bVar9 == 0x69) {
LAB_1000696f:
          local_8 = local_8 | 0x40;
        }
        else {
          if (bVar9 == 0x6e) {
            piVar7 = (int *)FUN_10006c69((int *)&param_3);
            if ((local_8 & 0x20) == 0) {
              *piVar7 = local_18;
            }
            else {
              *(undefined2 *)piVar7 = (undefined2)local_18;
            }
            local_2c = 1;
            break;
          }
          if (bVar9 == 0x6f) {
            local_10 = (undefined1 *)0x8;
            if ((local_8 & 0x80) != 0) {
              local_8 = local_8 | 0x200;
            }
            goto LAB_1000697a;
          }
          if (bVar9 == 0x70) {
            local_14 = 8;
            goto LAB_10006909;
          }
          if (bVar9 == 0x73) {
LAB_100066b7:
            iVar10 = local_14;
            if (local_14 == -1) {
              iVar10 = 0x7fffffff;
            }
            pWVar3 = (WCHAR *)FUN_10006c69((int *)&param_3);
            if ((local_8 & 0x810) == 0) {
              pWVar4 = pWVar3;
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_10010c90;
                pWVar4 = (WCHAR *)PTR_DAT_10010c90;
              }
              for (; (iVar10 != 0 && ((char)*pWVar3 != '\0')); pWVar3 = (WCHAR *)((int)pWVar3 + 1))
              {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar3 - (int)pWVar4);
            }
            else {
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_10010c94;
              }
              local_28 = 1;
              for (pWVar4 = pWVar3; (iVar10 != 0 && (*pWVar4 != L'\0')); pWVar4 = pWVar4 + 1) {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar4 - (int)pWVar3 >> 1);
              pWVar4 = pWVar3;
            }
            goto LAB_10006a94;
          }
          if (bVar9 != 0x75) {
            if (bVar9 != 0x78) goto LAB_10006a94;
            local_30 = 0x27;
            goto LAB_10006910;
          }
        }
        local_10 = (undefined1 *)0xa;
LAB_1000697a:
        if ((local_8 & 0x8000) == 0) {
          if ((local_8 & 0x20) == 0) {
            if ((local_8 & 0x40) == 0) {
              uVar2 = FUN_10006c69((int *)&param_3);
              uVar13 = (ulonglong)uVar2;
              goto LAB_100069cd;
            }
            uVar2 = FUN_10006c69((int *)&param_3);
          }
          else if ((local_8 & 0x40) == 0) {
            uVar2 = FUN_10006c69((int *)&param_3);
            uVar2 = uVar2 & 0xffff;
          }
          else {
            uVar5 = FUN_10006c69((int *)&param_3);
            uVar2 = (uint)(short)uVar5;
          }
          uVar13 = (ulonglong)(int)uVar2;
        }
        else {
          uVar13 = FUN_10006c76((int *)&param_3);
        }
LAB_100069cd:
        iVar10 = (int)(uVar13 >> 0x20);
        if ((((local_8 & 0x40) != 0) && (iVar10 == 0 || (longlong)uVar13 < 0)) &&
           ((longlong)uVar13 < 0)) {
          local_8 = local_8 | 0x100;
          uVar13 = CONCAT44(-(iVar10 + (uint)((int)uVar13 != 0)),-(int)uVar13);
        }
        uVar2 = (uint)(uVar13 >> 0x20);
        uVar15 = uVar13 & 0xffffffff;
        if ((local_8 & 0x8000) == 0) {
          uVar2 = 0;
        }
        if (local_14 < 0) {
          local_14 = 1;
        }
        else {
          local_8 = local_8 & 0xfffffff7;
        }
        if ((int)uVar13 == 0 && uVar2 == 0) {
          local_20 = 0;
        }
        local_c = (WCHAR *)&local_4d;
        while( true ) {
          uVar11 = (uint)uVar15;
          iVar10 = local_14 + -1;
          if ((local_14 < 1) && (uVar11 == 0 && uVar2 == 0)) break;
          local_40 = (int)local_10 >> 0x1f;
          local_44 = (uint)local_10;
          local_14 = iVar10;
          uVar14 = __aullrem(uVar11,uVar2,(uint)local_10,local_40);
          iVar10 = (int)uVar14 + 0x30;
          uVar15 = __aulldiv(uVar11,uVar2,local_44,local_40);
          uVar2 = (uint)(uVar15 >> 0x20);
          if (0x39 < iVar10) {
            iVar10 = iVar10 + local_30;
          }
          pWVar4 = (WCHAR *)((int)local_c + -1);
          *(char *)local_c = (char)iVar10;
          local_c = pWVar4;
        }
        iVar8 = -(int)local_c;
        local_10 = &local_4d + iVar8;
        pWVar4 = (WCHAR *)((int)local_c + 1);
        local_14 = iVar10;
        if (((local_8 & 0x200) != 0) &&
           ((*(char *)pWVar4 != '0' || (local_10 == (undefined1 *)0x0)))) {
          *(char *)local_c = '0';
          local_10 = (undefined1 *)((int)&local_4c + iVar8);
          pWVar4 = local_c;
        }
      }
LAB_10006a94:
      local_c = pWVar4;
      uVar2 = local_8;
      if (local_2c == 0) {
        if ((local_8 & 0x40) != 0) {
          if ((local_8 & 0x100) == 0) {
            if ((local_8 & 1) == 0) {
              if ((local_8 & 2) == 0) goto LAB_10006acc;
              local_1a = ' ';
            }
            else {
              local_1a = '+';
            }
          }
          else {
            local_1a = '-';
          }
          local_20 = 1;
        }
LAB_10006acc:
        iVar10 = (local_24 - local_20) - (int)local_10;
        if ((local_8 & 0xc) == 0) {
          FUN_10006c00(0x20,iVar10,param_1,&local_18);
        }
        FUN_10006c31(&local_1a,local_20,param_1,&local_18);
        if (((uVar2 & 8) != 0) && ((uVar2 & 4) == 0)) {
          FUN_10006c00(0x30,iVar10,param_1,&local_18);
        }
        if ((local_28 == 0) || (puVar12 = local_10, pWVar4 = local_c, (int)local_10 < 1)) {
          FUN_10006c31((char *)local_c,(int)local_10,param_1,&local_18);
        }
        else {
          do {
            puVar12 = puVar12 + -1;
            iVar8 = FUN_10008d7b(local_3c,*pWVar4);
            if (iVar8 < 1) break;
            FUN_10006c31(local_3c,iVar8,param_1,&local_18);
            pWVar4 = pWVar4 + 1;
          } while (puVar12 != (undefined1 *)0x0);
        }
        if ((local_8 & 4) != 0) {
          FUN_10006c00(0x20,iVar10,param_1,&local_18);
        }
      }
    }
    bVar9 = *param_2;
    pbVar1 = param_2;
  } while( true );
}


/*
 * FUN_10006bcb at 10006bcb
 * undefined __cdecl FUN_10006bcb(uint param_1, int * param_2, int * param_3)
 * Address ranges: 10006bcb-10006bff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10006bcb(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_1000476e(param_1,param_2);
  }
  else {
    *(undefined1 *)*param_2 = (undefined1)param_1;
    *param_2 = *param_2 + 1;
    uVar2 = param_1 & 0xff;
  }
  if (uVar2 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}


/*
 * FUN_10006c00 at 10006c00
 * undefined __cdecl FUN_10006c00(uint param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 10006c00-10006c30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10006c00(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_10006bcb(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}


/*
 * FUN_10006c31 at 10006c31
 * undefined __cdecl FUN_10006c31(char * param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 10006c31-10006c68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10006c31(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_10006bcb((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}


/*
 * FUN_10006c69 at 10006c69
 * undefined4 __cdecl FUN_10006c69(int * param_1)
 * Address ranges: 10006c69-10006c75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10006c69(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}


/*
 * FUN_10006c76 at 10006c76
 * undefined8 __cdecl FUN_10006c76(int * param_1)
 * Address ranges: 10006c76-10006c85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 __cdecl FUN_10006c76(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}


/*
 * FUN_10006c86 at 10006c86
 * undefined4 __cdecl FUN_10006c86(int * param_1)
 * Address ranges: 10006c86-10006c93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10006c86(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}


/*
 * FUN_10006c94 at 10006c94
 * undefined __fastcall FUN_10006c94(void * param_1)
 * Address ranges: 10006c94-10006ca5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __fastcall FUN_10006c94(void *param_1)

{
  FUN_10008f5a(param_1,0x10000,0x30000);
  return;
}


/*
 * FUN_10006ca6 at 10006ca6
 * undefined4 __stdcall FUN_10006ca6(void)
 * Address ranges: 10006ca6-10006ce3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Removing unreachable block (ram,0x10006cdb) */

undefined4 FUN_10006ca6(void)

{
  return 0;
}


/*
 * FUN_10006ce4 at 10006ce4
 * undefined __stdcall FUN_10006ce4(void)
 * Address ranges: 10006ce4-10006d0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10006ce4(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_10006ca6();
  return;
}


/*
 * FUN_10006d0d at 10006d0d
 * undefined __cdecl FUN_10006d0d(char * param_1)
 * Address ranges: 10006d0d-10006d66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10006d0d(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_10009100((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_100110f0 < 2) {
        uVar3 = (byte)PTR_DAT_10010ee0[*param_1 * 2] & 4;
        this = PTR_DAT_10010ee0;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_1000908b(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_100110f4;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}


/*
 * __fassign at 10006dcd
 * void __cdecl __fassign(int flag, char * argument, char * number)
 * Address ranges: 10006dcd-10006e0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __fassign  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __fassign
   
   Library: Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  void *in_ECX;
  void *local_c;
  void *local_8;
  
  if (flag != 0) {
    local_c = in_ECX;
    local_8 = in_ECX;
    FUN_100095cc(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_100095f9(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}


/*
 * FUN_10006e0b at 10006e0b
 * undefined1 * __cdecl FUN_10006e0b(undefined8 * param_1, undefined1 * param_2, int param_3, int param_4)
 * Address ranges: 10006e0b-10006e6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1 * __cdecl FUN_10006e0b(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_1000969d((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_10009626(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_10006e6c(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}


/*
 * FUN_10006e6c at 10006e6c
 * undefined1 * __cdecl FUN_10006e6c(undefined1 * param_1, int param_2, int param_3, int * param_4, char param_5)
 * Address ranges: 10006e6c-10006f2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1 * __cdecl
FUN_10006e6c(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_5 != '\0') {
    FUN_1000710e(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
  }
  puVar1 = param_1;
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    puVar1 = param_1 + 1;
  }
  puVar2 = puVar1;
  if (0 < param_2) {
    puVar2 = puVar1 + 1;
    *puVar1 = puVar1[1];
    *puVar2 = DAT_100110f4;
  }
  puVar3 = FUN_100097b0((uint *)(puVar2 + param_2 + (uint)(param_5 == '\0')),(uint *)"e+000");
  if (param_3 != 0) {
    *(undefined1 *)puVar3 = 0x45;
  }
  if (*(char *)param_4[3] != '0') {
    iVar4 = param_4[1] + -1;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
      *(undefined1 *)((int)puVar3 + 1) = 0x2d;
    }
    if (99 < iVar4) {
      *(char *)((int)puVar3 + 2) = *(char *)((int)puVar3 + 2) + (char)(iVar4 / 100);
      iVar4 = iVar4 % 100;
    }
    if (9 < iVar4) {
      *(char *)((int)puVar3 + 3) = *(char *)((int)puVar3 + 3) + (char)(iVar4 / 10);
      iVar4 = iVar4 % 10;
    }
    *(char *)(puVar3 + 1) = (char)puVar3[1] + (char)iVar4;
  }
  return param_1;
}


/*
 * FUN_10006f2e at 10006f2e
 * char * __cdecl FUN_10006f2e(undefined8 * param_1, char * param_2, size_t param_3)
 * Address ranges: 10006f2e-10006f82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char * __cdecl FUN_10006f2e(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_1000969d((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_10009626(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_10006f83(param_2,param_3,&local_14,'\0');
  return param_2;
}


/*
 * FUN_10006f83 at 10006f83
 * char * __cdecl FUN_10006f83(char * param_1, size_t param_2, int * param_3, char param_4)
 * Address ranges: 10006f83-10007029
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char * __cdecl FUN_10006f83(char *param_1,size_t param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar1 = param_3[1];
  if ((param_4 != '\0') && (iVar1 - 1U == param_2)) {
    iVar2 = *param_3;
    param_1[(uint)(iVar2 == 0x2d) + (iVar1 - 1U)] = '0';
    (param_1 + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[1] = '\0';
  }
  pcVar3 = param_1;
  if (*param_3 == 0x2d) {
    *param_1 = '-';
    pcVar3 = param_1 + 1;
  }
  if (param_3[1] < 1) {
    FUN_1000710e(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_1000710e(pcVar3,1);
    *pcVar3 = DAT_100110f4;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_1000710e(pcVar3 + 1,param_2);
      _memset(pcVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}


/*
 * FUN_1000702a at 1000702a
 * undefined __cdecl FUN_1000702a(undefined8 * param_1, char * param_2, size_t param_3, int param_4)
 * Address ranges: 1000702a-100070bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_1000702a(undefined8 *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_1000969d((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  iVar1 = local_10 + -1;
  FUN_10009626(param_2 + (local_14 == 0x2d),param_3,(int)&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || ((int)param_3 <= local_10)) {
    FUN_10006e6c(param_2,param_3,param_4,&local_14,'\x01');
  }
  else {
    pcVar2 = param_2 + (local_14 == 0x2d);
    if (iVar1 < local_10) {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_10006f83(param_2,param_3,&local_14,'\x01');
  }
  return;
}


/*
 * __cfltcvt at 100070bd
 * errno_t __cdecl __cfltcvt(double * arg, char * buffer, size_t sizeInBytes, int format, int precision, int caps)
 * Address ranges: 100070bd-1000710d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __cfltcvt  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  undefined1 *puVar2;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    puVar2 = FUN_10006e0b(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_10006f2e(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_1000702a(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}


/*
 * FUN_1000710e at 1000710e
 * undefined __cdecl FUN_1000710e(char * param_1, int param_2)
 * Address ranges: 1000710e-10007132
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_1000710e(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_10008960((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}


/*
 * FUN_10007133 at 10007133
 * undefined __stdcall FUN_10007133(void)
 * Address ranges: 10007133-1000715f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10007133(void)

{
  if (PTR_FUN_1000e8f4 != (undefined *)0x0) {
    (*(code *)PTR_FUN_1000e8f4)();
  }
  FUN_10007237((undefined4 *)&DAT_1000e008,(undefined4 *)&DAT_1000e014);
  FUN_10007237((undefined4 *)&DAT_1000e000,(undefined4 *)&DAT_1000e004);
  return;
}


/*
 * __exit at 10007160
 * noreturn void __cdecl __exit(int _Code)
 * Address ranges: 10007160-10007170
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __exit  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10007180(_Code,1,0);
  return;
}


/*
 * FUN_10007171 at 10007171
 * undefined __stdcall FUN_10007171(void)
 * Address ranges: 10007171-1000717f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10007171(void)

{
  FUN_10007180(0,0,1);
  return;
}


/*
 * FUN_10007180 at 10007180
 * undefined __cdecl FUN_10007180(UINT param_1, int param_2, int param_3)
 * Address ranges: 10007180-10007222
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10007180(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10007225();
  if (DAT_100e3b38 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_100e3b34 = 1;
  DAT_100e3b30 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_101f5a90 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_101f5a8c - 4), DAT_101f5a90 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_101f5a90 <= puVar1);
    }
    FUN_10007237((undefined4 *)&DAT_1000e018,(undefined4 *)&DAT_1000e020);
  }
  FUN_10007237((undefined4 *)&DAT_1000e024,(undefined4 *)&DAT_1000e028);
  if (param_3 == 0) {
    DAT_100e3b38 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_1000722e();
  return;
}


/*
 * FUN_10007225 at 10007225
 * undefined __stdcall FUN_10007225(void)
 * Address ranges: 10007225-1000722d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10007225(void)

{
  FUN_10006171(0xd);
  return;
}


/*
 * FUN_1000722e at 1000722e
 * undefined __stdcall FUN_1000722e(void)
 * Address ranges: 1000722e-10007236
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1000722e(void)

{
  FUN_100061d2(0xd);
  return;
}


/*
 * FUN_10007237 at 10007237
 * undefined __cdecl FUN_10007237(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 10007237-10007250
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10007237(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


/*
 * FUN_10007251 at 10007251
 * undefined4 __stdcall FUN_10007251(void)
 * Address ranges: 10007251-100072a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10007251(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_100060dc();
  DAT_10010cb0 = TlsAlloc();
  if (DAT_10010cb0 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10007bb7(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10010cb0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100072c3((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}


/*
 * FUN_100072a5 at 100072a5
 * undefined __stdcall FUN_100072a5(void)
 * Address ranges: 100072a5-100072c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_100072a5(void)

{
  FUN_10006105();
  if (DAT_10010cb0 != 0xffffffff) {
    TlsFree(DAT_10010cb0);
    DAT_10010cb0 = 0xffffffff;
  }
  return;
}


/*
 * FUN_100072c3 at 100072c3
 * undefined __cdecl FUN_100072c3(int param_1)
 * Address ranges: 100072c3-100072d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100072c3(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_10011130;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}


/*
 * FUN_100072d6 at 100072d6
 * DWORD * __stdcall FUN_100072d6(void)
 * Address ranges: 100072d6-1000733c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


DWORD * FUN_100072d6(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_10010cb0);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_10007bb7(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10010cb0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100072c3((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_10007331;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10007331:
  SetLastError(dwErrCode);
  return lpTlsValue;
}


/*
 * FUN_1000733d at 1000733d
 * undefined __cdecl FUN_1000733d(undefined * param_1)
 * Address ranges: 1000733d-100073dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_1000733d(undefined *param_1)

{
  if (DAT_10010cb0 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_10010cb0), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_10003f4c(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_10003f4c(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_10003f4c(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_10003f4c(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_10003f4c(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_10003f4c(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_10011130) {
        FUN_10003f4c(*(undefined **)(param_1 + 0x50));
      }
      FUN_10003f4c(param_1);
    }
    TlsSetValue(DAT_10010cb0,(LPVOID)0x0);
    return;
  }
  return;
}


/*
 * FUN_100073dd at 100073dd
 * undefined __stdcall FUN_100073dd(void)
 * Address ranges: 100073dd-10007598
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_100073dd(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  HANDLE hFile;
  UINT *pUVar5;
  int iVar6;
  uint uVar7;
  UINT UVar8;
  UINT UVar9;
  _STARTUPINFOA local_4c;
  byte *local_8;
  
  puVar2 = _malloc(0x480);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_101f5a80 = 0x20;
  DAT_101f5980 = puVar2;
  for (; puVar2 < DAT_101f5980 + 0x120; puVar2 = puVar2 + 9) {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0xffffffff;
    puVar2[2] = 0;
    *(undefined1 *)((int)puVar2 + 5) = 10;
  }
  GetStartupInfoA(&local_4c);
  if ((local_4c.cbReserved2 != 0) && ((UINT *)local_4c.lpReserved2 != (UINT *)0x0)) {
    UVar8 = *(UINT *)local_4c.lpReserved2;
    pUVar5 = (UINT *)((int)local_4c.lpReserved2 + 4);
    local_8 = (byte *)((int)pUVar5 + UVar8);
    if (0x7ff < (int)UVar8) {
      UVar8 = 0x800;
    }
    UVar9 = UVar8;
    if ((int)DAT_101f5a80 < (int)UVar8) {
      puVar2 = &DAT_101f5984;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_101f5a80;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_101f5a80 = DAT_101f5a80 + 0x20;
        *puVar2 = puVar3;
        puVar1 = puVar3;
        for (; puVar3 < puVar1 + 0x120; puVar3 = puVar3 + 9) {
          *(undefined1 *)(puVar3 + 1) = 0;
          *puVar3 = 0xffffffff;
          puVar3[2] = 0;
          *(undefined1 *)((int)puVar3 + 5) = 10;
          puVar1 = (undefined4 *)*puVar2;
        }
        puVar2 = puVar2 + 1;
        UVar9 = UVar8;
      } while ((int)DAT_101f5a80 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_101f5980)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
          *puVar2 = *(undefined4 *)local_8;
          *(byte *)(puVar2 + 1) = (byte)*pUVar5;
        }
        local_8 = local_8 + 4;
        uVar7 = uVar7 + 1;
        pUVar5 = (UINT *)((int)pUVar5 + 1);
      } while ((int)uVar7 < (int)UVar9);
    }
  }
  iVar6 = 0;
  do {
    puVar2 = DAT_101f5980 + iVar6 * 9;
    if (DAT_101f5980[iVar6 * 9] == -1) {
      *(undefined1 *)(puVar2 + 1) = 0x81;
      if (iVar6 == 0) {
        DVar4 = 0xfffffff6;
      }
      else {
        DVar4 = 0xfffffff5 - (iVar6 != 1);
      }
      hFile = GetStdHandle(DVar4);
      if ((hFile != (HANDLE)0xffffffff) && (DVar4 = GetFileType(hFile), DVar4 != 0)) {
        *puVar2 = hFile;
        if ((DVar4 & 0xff) != 2) {
          if ((DVar4 & 0xff) == 3) {
            *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 8;
          }
          goto LAB_10007582;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10007582:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_101f5a80);
      return;
    }
  } while( true );
}


/*
 * FUN_10007599 at 10007599
 * undefined __stdcall FUN_10007599(void)
 * Address ranges: 10007599-100075ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10007599(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_101f5980;
  do {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      if (uVar2 < uVar2 + 0x480) {
        lpCriticalSection = (LPCRITICAL_SECTION)(uVar2 + 0xc);
        do {
          if (lpCriticalSection[-1].SpinCount != 0) {
            DeleteCriticalSection(lpCriticalSection);
          }
          uVar2 = uVar2 + 0x24;
          lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].OwningThread;
        } while (uVar2 < *puVar1 + 0x480);
      }
      FUN_10003f4c((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x101f5a80);
  return;
}


/*
 * FUN_100075ed at 100075ed
 * undefined __stdcall FUN_100075ed(void)
 * Address ranges: 100075ed-100076a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100075ed(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_101f5a88 == 0) {
    FUN_10009c81();
  }
  iVar5 = 0;
  for (puVar6 = DAT_100e3a6c; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_100e3b18 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_100e3a6c;
  puVar6 = DAT_100e3a6c;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_100097b0((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_10003f4c((undefined *)DAT_100e3a6c);
  DAT_100e3a6c = (uint *)0x0;
  *puVar3 = 0;
  _DAT_101f5a84 = 1;
  return;
}


/*
 * FUN_100076a6 at 100076a6
 * undefined __stdcall FUN_100076a6(void)
 * Address ranges: 100076a6-1000773e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100076a6(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_101f5a88 == 0) {
    FUN_10009c81();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_100e3b3c,0x104);
  _DAT_100e3b28 = &DAT_100e3b3c;
  pbVar2 = &DAT_100e3b3c;
  if (*DAT_101f6ac4 != 0) {
    pbVar2 = DAT_101f6ac4;
  }
  FUN_1000773f(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1000773f(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_100e3b10 = puVar1;
  _DAT_100e3b0c = local_8 + -1;
  return;
}


/*
 * FUN_1000773f at 1000773f
 * undefined __cdecl FUN_1000773f(byte * param_1, undefined4 * param_2, byte * param_3, int * param_4, int * param_5)
 * Address ranges: 1000773f-100078f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_1000773f(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    while( true ) {
      bVar1 = param_1[1];
      pbVar4 = param_1 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      if (((*(byte *)((int)&DAT_101f5860 + bVar1 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
        pbVar4 = param_1 + 2;
      }
      *param_5 = *param_5 + 1;
      param_1 = pbVar4;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
      }
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar4 == 0x22) {
      pbVar4 = param_1 + 2;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar1 = *param_1;
      pbVar4 = param_1 + 1;
      if ((*(byte *)((int)&DAT_101f5860 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_100077ea;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_100077ea:
      pbVar4 = pbVar4 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar2 = false;
  puVar7 = param_2;
  while (*pbVar4 != 0) {
    for (; (*pbVar4 == 0x20 || (*pbVar4 == 9)); pbVar4 = pbVar4 + 1) {
    }
    if (*pbVar4 == 0) break;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = param_3;
      puVar7 = puVar7 + 1;
      param_2 = puVar7;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar3 = true;
      uVar6 = 0;
      for (; *pbVar4 == 0x5c; pbVar4 = pbVar4 + 1) {
        uVar6 = uVar6 + 1;
      }
      if (*pbVar4 == 0x22) {
        pbVar5 = pbVar4;
        if ((uVar6 & 1) == 0) {
          if ((!bVar2) || (pbVar5 = pbVar4 + 1, pbVar4[1] != 0x22)) {
            bVar3 = false;
            pbVar5 = pbVar4;
          }
          bVar2 = !bVar2;
          puVar7 = param_2;
        }
        uVar6 = uVar6 >> 1;
        pbVar4 = pbVar5;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar1 = *pbVar4;
      if ((bVar1 == 0) || ((!bVar2 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_101f5860 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_101f5860 + bVar1 + 1) & 4) != 0) {
            *param_3 = bVar1;
            param_3 = param_3 + 1;
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      pbVar4 = pbVar4 + 1;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}


/*
 * FUN_100078f3 at 100078f3
 * LPSTR __stdcall FUN_100078f3(void)
 * Address ranges: 100078f3-10007a24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


LPSTR FUN_100078f3(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  int iVar5;
  size_t _Size;
  LPSTR pCVar6;
  char *pcVar7;
  LPWCH lpWideCharStr;
  LPCH pCVar9;
  LPSTR local_8;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  pCVar9 = (LPCH)0x0;
  if (DAT_100e3c40 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_100e3c40 = 1;
LAB_1000794a:
      if ((lpWideCharStr == (LPWCH)0x0) &&
         (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
        return (LPSTR)0x0;
      }
      WVar2 = *lpWideCharStr;
      pWVar4 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar3 = pWVar4;
          pWVar4 = pWVar3 + 1;
        } while (*pWVar4 != L'\0');
        pWVar4 = pWVar3 + 2;
        WVar2 = *pWVar4;
      }
      iVar5 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
      _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      local_8 = (LPSTR)0x0;
      if (((_Size != 0) && (pCVar6 = _malloc(_Size), pCVar6 != (LPSTR)0x0)) &&
         (iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar6,_Size,(LPCSTR)0x0,(LPBOOL)0x0),
         local_8 = pCVar6, iVar5 == 0)) {
        FUN_10003f4c(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_100e3c40 = 2;
  }
  else {
    if (DAT_100e3c40 == 1) goto LAB_1000794a;
    if (DAT_100e3c40 != 2) {
      return (LPSTR)0x0;
    }
  }
  if ((pCVar9 == (LPCH)0x0) && (pCVar9 = GetEnvironmentStrings(), pCVar9 == (LPCH)0x0)) {
    return (LPSTR)0x0;
  }
  cVar1 = *pCVar9;
  pcVar7 = pCVar9;
  while (cVar1 != '\0') {
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = pcVar8 + 2;
    cVar1 = *pcVar7;
  }
  pCVar6 = _malloc((size_t)(pcVar7 + (1 - (int)pCVar9)));
  if (pCVar6 == (LPSTR)0x0) {
    pCVar6 = (LPSTR)0x0;
  }
  else {
    FUN_10004a80((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}


/*
 * FUN_10007a25 at 10007a25
 * undefined4 __stdcall FUN_10007a25(void)
 * Address ranges: 10007a25-10007a2a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10007a25(void)

{
  return 1;
}


/*
 * FUN_10007a2b at 10007a2b
 * undefined __stdcall FUN_10007a2b(void)
 * Address ranges: 10007a2b-10007a63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10007a2b(void)

{
  if ((DAT_100e3a74 == 1) || ((DAT_100e3a74 == 0 && (DAT_100e3a78 == 1)))) {
    FUN_10007a64(0xfc);
    if (DAT_100e3c44 != (code *)0x0) {
      (*DAT_100e3c44)();
    }
    FUN_10007a64(0xff);
  }
  return;
}


/*
 * FUN_10007a64 at 10007a64
 * undefined __cdecl FUN_10007a64(DWORD param_1)
 * Address ranges: 10007a64-10007bb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10007a64(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  uint *_Dest;
  undefined1 auStackY_1e3 [7];
  LPCVOID lpBuffer;
  LPOVERLAPPED lpOverlapped;
  uint local_1a8 [65];
  uint local_a4 [40];
  
  iVar5 = 0;
  pDVar2 = &DAT_10010ce0;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10010d70);
  if (param_1 == (&DAT_10010ce0)[iVar5 * 2]) {
    if ((DAT_100e3a74 == 1) || ((DAT_100e3a74 == 0 && (DAT_100e3a78 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x10010ce4);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_100097b0(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_100097b0(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_100097c0(local_a4,_Dest);
      FUN_100097c0(local_a4,(uint *)&DAT_1000c5b4);
      FUN_100097c0(local_a4,*(uint **)(iVar5 * 8 + 0x10010ce4));
      auStackY_1e3._3_4_ = 0x10007b88;
      FUN_10009c9d(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}


/*
 * FUN_10007bb7 at 10007bb7
 * int * __cdecl FUN_10007bb7(int param_1, int param_2)
 * Address ranges: 10007bb7-10007c4a;10007c59-10007cd3;10007ce2-10007cf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * __cdecl FUN_10007bb7(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *_Size;
  int *local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000c5f0;
  puStack_10 = &LAB_100062e0;
  local_14 = ExceptionList;
  puVar2 = (uint *)(param_1 * param_2);
  puVar3 = puVar2;
  ExceptionList = &local_14;
  if (puVar2 < (uint *)0xffffffe1) {
    if (puVar2 == (uint *)0x0) {
      puVar3 = (uint *)0x1;
    }
    puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
    ExceptionList = &local_14;
  }
  do {
    local_24 = (int *)0x0;
    if (puVar3 < (uint *)0xffffffe1) {
      if (DAT_101f5ab4 == 3) {
        if (puVar2 <= DAT_101f5aac) {
          FUN_10006171(9);
          local_8 = 0;
          local_24 = FUN_10005603(puVar2);
          local_8 = 0xffffffff;
          FUN_10007c50();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_10007ca4;
LAB_10007c93:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_10007c9f:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_101f5ab4 != 2) || (DAT_10010bbc < puVar3)) goto LAB_10007c9f;
        FUN_10006171(9);
        local_8 = 1;
        local_24 = FUN_10005db0((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_10007cd9();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_10007c93;
      }
LAB_10007ca4:
      local_24 = HeapAlloc(DAT_101f5ab0,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_100e3ae8 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_100063b8(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}


/*
 * FUN_10007c50 at 10007c50
 * undefined __stdcall FUN_10007c50(void)
 * Address ranges: 10007c50-10007c58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10007c50(void)

{
  FUN_100061d2(9);
  return;
}


/*
 * FUN_10007cd9 at 10007cd9
 * undefined __stdcall FUN_10007cd9(void)
 * Address ranges: 10007cd9-10007ce1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10007cd9(void)

{
  FUN_100061d2(9);
  return;
}


/*
 * FUN_10007d75 at 10007d75
 * undefined __cdecl FUN_10007d75(uint param_1)
 * Address ranges: 10007d75-10007de7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10007d75(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_10007df1();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_10010d70;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_10007de8();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x10010d74);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x10010ed8);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_10007de8();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_10007de8();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_10007de8();
  *pDVar1 = 0x16;
  return;
}


/*
 * FUN_10007de8 at 10007de8
 * DWORD * __stdcall FUN_10007de8(void)
 * Address ranges: 10007de8-10007df0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


DWORD * FUN_10007de8(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100072d6();
  return pDVar1 + 2;
}


/*
 * FUN_10007df1 at 10007df1
 * DWORD * __stdcall FUN_10007df1(void)
 * Address ranges: 10007df1-10007df9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


DWORD * FUN_10007df1(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100072d6();
  return pDVar1 + 3;
}


/*
 * FUN_10007dfa at 10007dfa
 * uint __stdcall FUN_10007dfa(void)
 * Address ranges: 10007dfa-10007f1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint FUN_10007dfa(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int local_8;
  int local_4;
  
  uVar4 = 0xffffffff;
  FUN_10006171(0x12);
  local_8 = 0;
  local_4 = 0;
  piVar3 = &DAT_101f5980;
  while (puVar2 = (undefined4 *)*piVar3, puVar1 = puVar2, puVar2 != (undefined4 *)0x0) {
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      if ((*(byte *)(puVar2 + 1) & 1) == 0) {
        if (puVar2[2] == 0) {
          FUN_10006171(0x11);
          if (puVar2[2] == 0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
            puVar2[2] = puVar2[2] + 1;
          }
          FUN_100061d2(0x11);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
        if ((*(byte *)(puVar2 + 1) & 1) == 0) {
          *puVar2 = 0xffffffff;
          uVar4 = ((int)puVar2 - *piVar3) / 0x24 + local_4;
          if (uVar4 != 0xffffffff) goto LAB_10007f0c;
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
      }
      puVar1 = (undefined4 *)*piVar3;
    }
    local_4 = local_4 + 0x20;
    piVar3 = piVar3 + 1;
    local_8 = local_8 + 1;
    if (0x101f5a7f < (int)piVar3) goto LAB_10007f0c;
  }
  puVar2 = _malloc(0x480);
  if (puVar2 != (undefined4 *)0x0) {
    DAT_101f5a80 = DAT_101f5a80 + 0x20;
    (&DAT_101f5980)[local_8] = puVar2;
    puVar1 = puVar2;
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      puVar2[2] = 0;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar1 = (undefined4 *)(&DAT_101f5980)[local_8];
    }
    uVar4 = local_8 << 5;
    FUN_1000805a(uVar4);
  }
LAB_10007f0c:
  FUN_100061d2(0x12);
  return uVar4;
}


/*
 * FUN_10007f1d at 10007f1d
 * undefined4 __cdecl FUN_10007f1d(uint param_1, HANDLE param_2)
 * Address ranges: 10007f1d-10007f98
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10007f1d(uint param_1,HANDLE param_2)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_101f5a80) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_101f5980)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_100e3a78 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10007f76;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_10007f76:
      *(HANDLE *)((&DAT_101f5980)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  pDVar1 = FUN_10007de8();
  *pDVar1 = 9;
  pDVar1 = FUN_10007df1();
  *pDVar1 = 0;
  return 0xffffffff;
}


/*
 * FUN_10007f99 at 10007f99
 * undefined4 __cdecl FUN_10007f99(uint param_1)
 * Address ranges: 10007f99-10008017
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10007f99(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_101f5a80) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_101f5980)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_100e3a78 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10007ff5;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_10007ff5:
      *(undefined4 *)((&DAT_101f5980)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_10007de8();
  *pDVar2 = 9;
  pDVar2 = FUN_10007df1();
  *pDVar2 = 0;
  return 0xffffffff;
}


/*
 * FUN_10008018 at 10008018
 * undefined4 __cdecl FUN_10008018(uint param_1)
 * Address ranges: 10008018-10008059
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10008018(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_101f5a80) &&
     ((*(byte *)((&DAT_101f5980)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_101f5980)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_10007de8();
  *pDVar1 = 9;
  pDVar1 = FUN_10007df1();
  *pDVar1 = 0;
  return 0xffffffff;
}


/*
 * FUN_1000805a at 1000805a
 * undefined __cdecl FUN_1000805a(uint param_1)
 * Address ranges: 1000805a-100080b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_1000805a(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_101f5980)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10006171(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_100061d2(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_101f5980)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}


/*
 * FUN_100080b9 at 100080b9
 * undefined __cdecl FUN_100080b9(uint param_1)
 * Address ranges: 100080b9-100080da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100080b9(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_101f5980)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}


/*
 * FUN_100080db at 100080db
 * undefined4 __cdecl FUN_100080db(uint param_1)
 * Address ranges: 100080db-1000816d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_100080db(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_101f5a80 <= param_1) {
LAB_1000815c:
    pDVar3 = FUN_10007de8();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_101f5980)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1000815c;
  FUN_1000805a(param_1);
  if ((*(byte *)((&DAT_101f5980)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_10008018(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_10008151;
    pDVar3 = FUN_10007df1();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_10007de8();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_10008151:
  FUN_100080b9(param_1);
  return uVar5;
}


/*
 * FUN_1000816e at 1000816e
 * DWORD __cdecl FUN_1000816e(uint param_1, LONG param_2, DWORD param_3)
 * Address ranges: 1000816e-100081d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


DWORD __cdecl FUN_1000816e(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_101f5a80) &&
     ((*(byte *)((&DAT_101f5980)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000805a(param_1);
    DVar1 = FUN_100081d3(param_1,param_2,param_3);
    FUN_100080b9(param_1);
    return DVar1;
  }
  pDVar2 = FUN_10007de8();
  *pDVar2 = 9;
  pDVar2 = FUN_10007df1();
  *pDVar2 = 0;
  return 0xffffffff;
}


/*
 * FUN_100081d3 at 100081d3
 * DWORD __cdecl FUN_100081d3(uint param_1, LONG param_2, DWORD param_3)
 * Address ranges: 100081d3-10008245
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


DWORD __cdecl FUN_100081d3(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_10008018(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_10007de8();
    *pDVar2 = 9;
  }
  else {
    DVar3 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
    if (DVar3 == 0xffffffff) {
      uVar4 = GetLastError();
    }
    else {
      uVar4 = 0;
    }
    if (uVar4 == 0) {
      pbVar1 = (byte *)((&DAT_101f5980)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_10007d75(uVar4);
  }
  return 0xffffffff;
}


/*
 * FUN_10008246 at 10008246
 * undefined __cdecl FUN_10008246(undefined4 * param_1)
 * Address ranges: 10008246-10008289
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10008246(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_100e3a7c = _DAT_100e3a7c + 1;
  pvVar1 = _malloc(0x1000);
  param_1[2] = pvVar1;
  if (pvVar1 == (void *)0x0) {
    param_1[3] = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return;
}


/*
 * FUN_1000828a at 1000828a
 * byte __cdecl FUN_1000828a(uint param_1)
 * Address ranges: 1000828a-100082b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


byte __cdecl FUN_1000828a(uint param_1)

{
  if (DAT_101f5a80 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_101f5980)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}


/*
 * FUN_100082b3 at 100082b3
 * uint __cdecl FUN_100082b3(LPCSTR param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 100082b3-10008581
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_100082b3(LPCSTR param_1,uint param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  DWORD *pDVar4;
  HANDLE hFile;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  _SECURITY_ATTRIBUTES local_20;
  DWORD local_14;
  DWORD local_10;
  DWORD local_c;
  byte local_5;
  
  bVar8 = (param_2 & 0x80) == 0;
  local_20.nLength = 0xc;
  local_20.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar8) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_20.bInheritHandle = (BOOL)bVar8;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_100e3c5c != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar2 = param_2 & 3;
  if (uVar2 == 0) {
    local_10 = 0x80000000;
  }
  else if (uVar2 == 1) {
    local_10 = 0x40000000;
  }
  else {
    if (uVar2 != 2) goto LAB_100083b7;
    local_10 = 0xc0000000;
  }
  if (param_3 == 0x10) {
    local_14 = 0;
  }
  else if (param_3 == 0x20) {
    local_14 = 1;
  }
  else if (param_3 == 0x30) {
    local_14 = 2;
  }
  else {
    if (param_3 != 0x40) goto LAB_100083b7;
    local_14 = 3;
  }
  uVar2 = param_2 & 0x700;
  if (uVar2 < 0x401) {
    if ((uVar2 == 0x400) || (uVar2 == 0)) {
      local_c = 3;
    }
    else if (uVar2 == 0x100) {
      local_c = 4;
    }
    else {
      if (uVar2 == 0x200) goto LAB_100083d1;
      if (uVar2 != 0x300) goto LAB_100083b7;
      local_c = 2;
    }
  }
  else {
    if (uVar2 != 0x500) {
      if (uVar2 == 0x600) {
LAB_100083d1:
        local_c = 5;
        goto LAB_100083e1;
      }
      if (uVar2 != 0x700) {
LAB_100083b7:
        pDVar4 = FUN_10007de8();
        *pDVar4 = 0x16;
        pDVar4 = FUN_10007df1();
        *pDVar4 = 0;
        return 0xffffffff;
      }
    }
    local_c = 1;
  }
LAB_100083e1:
  uVar2 = 0x80;
  if (((param_2 & 0x100) != 0) && ((~DAT_100e3af8 & param_4 & 0x80) == 0)) {
    uVar2 = 1;
  }
  if ((param_2 & 0x40) != 0) {
    uVar2 = uVar2 | 0x4000000;
    local_10 = CONCAT13(local_10._3_1_,0x10000);
  }
  if ((param_2 & 0x1000) != 0) {
    uVar2 = uVar2 | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      uVar2 = uVar2 | 0x10000000;
    }
  }
  else {
    uVar2 = uVar2 | 0x8000000;
  }
  uVar3 = FUN_10007dfa();
  if (uVar3 == 0xffffffff) {
    pDVar4 = FUN_10007de8();
    *pDVar4 = 0x18;
    pDVar4 = FUN_10007df1();
    *pDVar4 = 0;
    return 0xffffffff;
  }
  hFile = CreateFileA(param_1,local_10,local_14,&local_20,local_c,uVar2,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    DVar5 = GetFileType(hFile);
    if (DVar5 != 0) {
      if (DVar5 == 2) {
        local_5 = local_5 | 0x40;
      }
      else if (DVar5 == 3) {
        local_5 = local_5 | 8;
      }
      FUN_10007f1d(uVar3,hFile);
      iVar7 = (uVar3 & 0x1f) * 0x24;
      param_1._3_1_ = local_5 & 0x48;
      *(byte *)((&DAT_101f5980)[(int)uVar3 >> 5] + 4 + iVar7) = local_5 | 1;
      if ((((local_5 & 0x48) == 0) && ((local_5 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
        local_14 = FUN_100081d3(uVar3,-1,2);
        if (local_14 == 0xffffffff) {
          pDVar4 = FUN_10007df1();
          if (*pDVar4 == 0x83) goto LAB_1000855b;
        }
        else {
          param_3 = param_3 & 0xffffff;
          iVar6 = FUN_10009f53(uVar3,(char *)((int)&param_3 + 3),(char *)0x1);
          if ((((iVar6 != 0) || (param_3._3_1_ != '\x1a')) ||
              (iVar6 = FUN_10009e2e(uVar3,local_14), iVar6 != -1)) &&
             (DVar5 = FUN_100081d3(uVar3,0,0), DVar5 != 0xffffffff)) goto LAB_1000855b;
        }
        FUN_1000452c(uVar3);
        uVar2 = 0xffffffff;
      }
      else {
LAB_1000855b:
        uVar2 = uVar3;
        if ((param_1._3_1_ == 0) && ((param_2 & 8) != 0)) {
          pbVar1 = (byte *)((&DAT_101f5980)[(int)uVar3 >> 5] + 4 + iVar7);
          *pbVar1 = *pbVar1 | 0x20;
        }
      }
      goto LAB_10008574;
    }
    CloseHandle(hFile);
  }
  DVar5 = GetLastError();
  FUN_10007d75(DVar5);
  uVar2 = 0xffffffff;
LAB_10008574:
  FUN_100080b9(uVar3);
  return uVar2;
}


/*
 * FUN_10008582 at 10008582
 * undefined __thiscall FUN_10008582(void * this, byte * param_1, int * param_2, void * param_3)
 * Address ranges: 10008582-10008598
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __thiscall FUN_10008582(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_10008599(this,param_1,param_2,param_3,0);
  return;
}


/*
 * FUN_10008599 at 10008599
 * void * __thiscall FUN_10008599(void * this, byte * param_1, int * param_2, void * param_3, uint param_4)
 * Address ranges: 10008599-1000879d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void * __thiscall FUN_10008599(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

{
  byte *pbVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  DWORD *pDVar6;
  void *this_00;
  byte bVar7;
  undefined *puVar8;
  void *local_c;
  byte *local_8;
  
  local_c = (void *)0x0;
  bVar7 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    local_8 = pbVar1 + 1;
    if (DAT_100110f0 < 2) {
      uVar3 = (byte)PTR_DAT_10010ee0[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_10010ee0;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_1000908b(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_100085f4:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_100085f4;
  if ((((int)param_3 < 0) || (param_3 == (void *)0x1)) || (0x24 < (int)param_3)) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)param_1;
    }
    return (void *)0x0;
  }
  this_00 = (void *)0x10;
  if (param_3 == (void *)0x0) {
    if (bVar7 != 0x30) {
      param_3 = (void *)0xa;
      goto LAB_1000865e;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_1000865e;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_1000865e:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_100110f0 < 2) {
      uVar5 = (byte)PTR_DAT_10010ee0[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_1000908b(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_100110f0 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_10010ee0 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_1000908b(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_1000870a:
        local_8 = local_8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (int *)0x0) {
            local_8 = param_1;
          }
          local_c = (void *)0x0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && ((void *)0x80000000 < local_c)) ||
                  (((param_4 & 2) == 0 && ((void *)0x7fffffff < local_c)))))))) {
          pDVar6 = FUN_10007de8();
          *pDVar6 = 0x22;
          if ((param_4 & 1) == 0) {
            local_c = (void *)(((param_4 & 2) != 0) + 0x7fffffff);
          }
          else {
            local_c = (void *)0xffffffff;
          }
        }
        if (param_2 != (int *)0x0) {
          *param_2 = (int)local_8;
        }
        if ((param_4 & 2) == 0) {
          return local_c;
        }
        return (void *)-(int)local_c;
      }
      uVar3 = FUN_1000a12c((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_1000870a;
    if ((local_c < pvVar4) ||
       ((local_c == pvVar4 && (this_00 <= (void *)(0xffffffff % ZEXT48(param_3)))))) {
      local_c = (void *)((int)local_c * (int)param_3 + (int)this_00);
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar7 = *local_8;
    local_8 = local_8 + 1;
  } while( true );
}


/*
 * _strchr at 100087b0
 * char * __cdecl _strchr(char * _Str, int _Val)
 * Address ranges: 100087a0-100087a4;100087b0-1000886b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _strchr  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _strchr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strchr(char *_Str,int _Val)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)_Str & 3) != 0) {
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    _Str = (char *)((int)_Str + 1);
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *(uint *)_Str;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11((char)_Val,(char)_Val),CONCAT11((char)_Val,(char)_Val));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = (uint *)((int)_Str + 4);
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      _Str = (char *)puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (char *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (char *)0x0;
        }
      }
    }
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 1);
    }
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 3);
    }
    _Str = (char *)puVar5;
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}


/*
 * _strstr at 10008870
 * char * __cdecl _strstr(char * _Str, char * _SubStr)
 * Address ranges: 10008870-100088ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _strstr  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _strstr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strstr(char *_Str,char *_SubStr)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint *puVar9;
  char *pcVar10;
  
  cVar3 = *_SubStr;
  if (cVar3 == '\0') {
    return _Str;
  }
  if (_SubStr[1] == '\0') {
    while (((uint)_Str & 3) != 0) {
      uVar4 = *(uint *)_Str;
      if ((char)uVar4 == cVar3) {
        return (char *)(uint *)_Str;
      }
      _Str = (char *)((int)_Str + 1);
      if ((char)uVar4 == '\0') {
        return (char *)0x0;
      }
    }
    while( true ) {
      while( true ) {
        uVar4 = *(uint *)_Str;
        uVar7 = uVar4 ^ CONCAT22(CONCAT11(cVar3,cVar3),CONCAT11(cVar3,cVar3));
        uVar6 = uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff;
        puVar9 = (uint *)((int)_Str + 4);
        if (((uVar7 ^ 0xffffffff ^ uVar7 + 0x7efefeff) & 0x81010100) != 0) break;
        _Str = (char *)puVar9;
        if ((uVar6 & 0x81010100) != 0) {
          if ((uVar6 & 0x1010100) != 0) {
            return (char *)0x0;
          }
          if ((uVar4 + 0x7efefeff & 0x80000000) == 0) {
            return (char *)0x0;
          }
        }
      }
      uVar4 = *(uint *)_Str;
      if ((char)uVar4 == cVar3) {
        return (char *)(uint *)_Str;
      }
      if ((char)uVar4 == '\0') {
        return (char *)0x0;
      }
      cVar5 = (char)(uVar4 >> 8);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 1);
      }
      if (cVar5 == '\0') {
        return (char *)0x0;
      }
      cVar5 = (char)(uVar4 >> 0x10);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 2);
      }
      if (cVar5 == '\0') break;
      cVar5 = (char)(uVar4 >> 0x18);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 3);
      }
      _Str = (char *)puVar9;
      if (cVar5 == '\0') {
        return (char *)0x0;
      }
    }
    return (char *)0x0;
  }
  do {
    cVar5 = *_Str;
    do {
      while (_Str = _Str + 1, cVar5 != cVar3) {
        if (cVar5 == '\0') {
          return (char *)0x0;
        }
        cVar5 = *_Str;
      }
      cVar5 = *_Str;
      pcVar10 = _Str + 1;
      pcVar8 = _SubStr;
    } while (cVar5 != _SubStr[1]);
    do {
      if (pcVar8[2] == '\0') {
LAB_100088e3:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_100088e3;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}


/*
 * _strncmp at 100088f0
 * int __cdecl _strncmp(char * _Str1, char * _Str2, size_t _MaxCount)
 * Address ranges: 100088f0-10008927
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _strncmp  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _strncmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar5 = 0;
  sVar3 = _MaxCount;
  pcVar6 = _Str1;
  if (_MaxCount != 0) {
    do {
      if (sVar3 == 0) break;
      sVar3 = sVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = _MaxCount - sVar3;
    do {
      pcVar6 = _Str2;
      pcVar7 = _Str1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = _Str1 + 1;
      pcVar6 = _Str2 + 1;
      cVar2 = *_Str1;
      cVar1 = *_Str2;
      _Str2 = pcVar6;
      _Str1 = pcVar7;
    } while (cVar1 == cVar2);
    uVar5 = 0;
    if ((byte)pcVar6[-1] <= (byte)pcVar7[-1]) {
      if (pcVar6[-1] == pcVar7[-1]) {
        return 0;
      }
      uVar5 = 0xfffffffe;
    }
    uVar5 = ~uVar5;
  }
  return uVar5;
}


/*
 * FUN_10008930 at 10008930
 * undefined __stdcall FUN_10008930(void)
 * Address ranges: 10008930-1000895e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Unable to track spacebase fully for stack */

void FUN_10008930(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}


/*
 * FUN_10008960 at 10008960
 * undefined4 * __cdecl FUN_10008960(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * Address ranges: 10008960-100089ba;100089bc-100089c2;100089d0-100089f8;100089fc-10008a1e;10008a20-10008a38;10008a5c-10008aa5;10008ab8-10008abe;10008ac0-10008aca;10008acc-10008adc;10008ae0-10008af6;10008af8-10008b1d;10008b20-10008b28;10008b2c-10008b4a;10008b58-10008b74;10008b78-10008b9e;10008ba0-10008bd0;10008bf4-10008c3d;10008c50-10008c56;10008c58-10008c64;10008c68-10008c7a;10008c7c-10008c94
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * __cdecl FUN_10008960(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_10008b17_caseD_2;
        case 3:
          goto switchD_10008b17_caseD_3;
        }
        goto switchD_10008b17_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10008b17_caseD_0;
      case 1:
        goto switchD_10008b17_caseD_1;
      case 2:
        goto switchD_10008b17_caseD_2;
      case 3:
        goto switchD_10008b17_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10008b17_caseD_2;
            case 3:
              goto switchD_10008b17_caseD_3;
            }
            goto switchD_10008b17_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10008b17_caseD_2;
            case 3:
              goto switchD_10008b17_caseD_3;
            }
            goto switchD_10008b17_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10008b17_caseD_2;
            case 3:
              goto switchD_10008b17_caseD_3;
            }
            goto switchD_10008b17_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_10008b17_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10008b17_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10008b17_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10008b17_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_10008995_caseD_2;
      case 3:
        goto switchD_10008995_caseD_3;
      }
      goto switchD_10008995_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10008995_caseD_0;
    case 1:
      goto switchD_10008995_caseD_1;
    case 2:
      goto switchD_10008995_caseD_2;
    case 3:
      goto switchD_10008995_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10008995_caseD_2;
          case 3:
            goto switchD_10008995_caseD_3;
          }
          goto switchD_10008995_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10008995_caseD_2;
          case 3:
            goto switchD_10008995_caseD_3;
          }
          goto switchD_10008995_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10008995_caseD_2;
          case 3:
            goto switchD_10008995_caseD_3;
          }
          goto switchD_10008995_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_10008995_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10008995_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10008995_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10008995_caseD_0:
  return param_1;
}


/*
 * _memset at 10008ca0
 * void * __cdecl _memset(void * _Dst, int _Val, size_t _Size)
 * Address ranges: 10008ca0-10008cf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _memset  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = _Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined1 *)puVar4 = (undefined1)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}


/*
 * _strlen at 10008d00
 * size_t __cdecl _strlen(char * _Str)
 * Address ranges: 10008d00-10008d7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _strlen  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _strlen
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_10008d20;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10008d53:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10008d20:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_10008d53;
}


/*
 * FUN_10008d7b at 10008d7b
 * int __cdecl FUN_10008d7b(LPSTR param_1, WCHAR param_2)
 * Address ranges: 10008d7b-10008dd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10008d7b(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_101f572c);
  bVar2 = DAT_101f5728 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_101f572c);
    FUN_10006171(0x13);
  }
  iVar1 = FUN_10008dd4(param_1,param_2);
  if (bVar2) {
    FUN_100061d2(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_101f572c);
  }
  return iVar1;
}


/*
 * FUN_10008dd4 at 10008dd4
 * int __cdecl FUN_10008dd4(LPSTR param_1, WCHAR param_2)
 * Address ranges: 10008dd4-10008e3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10008dd4(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  DWORD *pDVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_100e3c74 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_100e3c84,0x220,&param_2,1,lpMultiByteStr,DAT_100110f0,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  pDVar2 = FUN_10007de8();
  *pDVar2 = 0x2a;
  return -1;
}


/*
 * __aulldiv at 10008e40
 * undefined8 __stdcall __aulldiv(uint param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 10008e40-10008ea7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __aulldiv  Library: Visual Studio
 */


/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar6;
  
  uVar9 = param_1;
  uVar6 = param_4;
  uVar7 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar6 >> 1;
      uVar3 = (uint)(CONCAT14((uVar6 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar7 >> 1;
      uVar9 = (uint)(CONCAT14((uVar7 & 1) != 0,uVar9) >> 1);
      uVar6 = uVar5;
      uVar7 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar9) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar9 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar9)) ||
       ((param_2 <= uVar9 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


/*
 * __aullrem at 10008eb0
 * undefined8 __stdcall __aullrem(uint param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 10008eb0-10008f24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __aullrem  Library: Visual Studio
 */


/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio */

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar4 = param_1;
  uVar9 = param_4;
  uVar10 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar10 >> 1;
      uVar4 = (uint)(CONCAT14((uVar10 & 1) != 0,uVar4) >> 1);
      uVar9 = uVar5;
      uVar10 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar4) / (ulonglong)uVar3;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}


/*
 * FUN_10008f25 at 10008f25
 * uint __thiscall FUN_10008f25(void * this, uint param_1, uint param_2)
 * Address ranges: 10008f25-10008f59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __thiscall FUN_10008f25(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_10008f70(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_10009002(uVar1);
  return uVar1;
}


/*
 * FUN_10008f5a at 10008f5a
 * undefined __thiscall FUN_10008f5a(void * this, uint param_1, uint param_2)
 * Address ranges: 10008f5a-10008f6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __thiscall FUN_10008f5a(void *this,uint param_1,uint param_2)

{
  FUN_10008f25(this,param_1,param_2 & 0xfff7ffff);
  return;
}


/*
 * FUN_10008f70 at 10008f70
 * uint __cdecl FUN_10008f70(uint param_1)
 * Address ranges: 10008f70-10009001
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_10008f70(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = param_1 & 0xc00;
  if (uVar2 != 0) {
    if (uVar2 == 0x400) {
      uVar1 = uVar1 | 0x100;
    }
    else if (uVar2 == 0x800) {
      uVar1 = uVar1 | 0x200;
    }
    else if (uVar2 == 0xc00) {
      uVar1 = uVar1 | 0x300;
    }
  }
  if ((param_1 & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((param_1 & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((param_1 & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  return uVar1;
}


/*
 * FUN_10009002 at 10009002
 * uint __cdecl FUN_10009002(uint param_1)
 * Address ranges: 10009002-1000908a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_10009002(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((param_1 & 0x10) != 0);
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((param_1 & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((param_1 & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = param_1 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((param_1 & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((param_1 & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}


/*
 * FUN_1000908b at 1000908b
 * uint __thiscall FUN_1000908b(void * this, int param_1, uint param_2)
 * Address ranges: 1000908b-100090ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __thiscall FUN_1000908b(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_10010ee0 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_10010ee0[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_1000a267(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}


/*
 * FUN_10009100 at 10009100
 * uint __cdecl FUN_10009100(uint param_1)
 * Address ranges: 10009100-1000916e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_10009100(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_100e3c74 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_101f572c);
    bVar1 = DAT_101f5728 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_101f572c);
      this = (void *)0x13;
      FUN_10006171(0x13);
    }
    param_1 = FUN_1000916f(this,param_1);
    if (bVar1) {
      FUN_100061d2(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_101f572c);
    }
  }
  return param_1;
}


/*
 * FUN_1000916f at 1000916f
 * uint __thiscall FUN_1000916f(void * this, uint param_1)
 * Address ranges: 1000916f-10009239
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __thiscall FUN_1000916f(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_100e3c74 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_100110f0 < 2) {
        uVar2 = (byte)PTR_DAT_10010ee0[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_1000908b(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10010ee0[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1000a3b0(DAT_100e3c74,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)local_8 & 0xff;
      }
      else {
        uVar1 = (uint)local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}


/*
 * FUN_1000923a at 1000923a
 * undefined4 __cdecl FUN_1000923a(int param_1, int param_2)
 * Address ranges: 1000923a-10009282
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_1000923a(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + (param_2 / 0x20) * 4) & ~(-1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f)))
      != 0) {
    return 0;
  }
  iVar2 = param_2 / 0x20 + 1;
  if (iVar2 < 3) {
    piVar1 = (int *)(param_1 + iVar2 * 4);
    do {
      if (*piVar1 != 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 3);
  }
  return 1;
}


/*
 * FUN_10009283 at 10009283
 * undefined __cdecl FUN_10009283(int param_1, int param_2)
 * Address ranges: 10009283-100092d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10009283(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_1000a5ff(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_1000a5ff(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}


/*
 * FUN_100092d9 at 100092d9
 * undefined4 __cdecl FUN_100092d9(int param_1, int param_2)
 * Address ranges: 100092d9-10009364
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_100092d9(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_8;
  
  local_8 = 0;
  puVar1 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  bVar3 = 0x1f - (char)(param_2 % 0x20);
  if (((*puVar1 & 1 << (bVar3 & 0x1f)) != 0) &&
     (iVar2 = FUN_1000923a(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_10009283(param_1,param_2 + -1);
  }
  *puVar1 = *puVar1 & -1 << (bVar3 & 0x1f);
  iVar2 = param_2 / 0x20 + 1;
  if (iVar2 < 3) {
    puVar5 = (undefined4 *)(param_1 + iVar2 * 4);
    for (iVar4 = 3 - iVar2; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return local_8;
}


/*
 * FUN_10009365 at 10009365
 * undefined __cdecl FUN_10009365(int param_1, undefined4 * param_2)
 * Address ranges: 10009365-1000937f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10009365(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 - (int)param_2;
  iVar2 = 3;
  do {
    *(undefined4 *)(iVar1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


/*
 * FUN_10009380 at 10009380
 * undefined __cdecl FUN_10009380(undefined4 * param_1)
 * Address ranges: 10009380-1000938b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10009380(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


/*
 * FUN_1000938c at 1000938c
 * undefined4 __cdecl FUN_1000938c(int * param_1)
 * Address ranges: 1000938c-100093a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_1000938c(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 3);
  return 1;
}


/*
 * FUN_100093a7 at 100093a7
 * undefined __cdecl FUN_100093a7(uint * param_1, uint param_2)
 * Address ranges: 100093a7-10009433
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100093a7(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int local_8;
  
  local_8 = 3;
  iVar2 = (int)param_2 / 0x20;
  iVar5 = (int)param_2 % 0x20;
  param_2 = 0;
  bVar3 = (byte)iVar5;
  puVar6 = param_1;
  do {
    uVar1 = *puVar6;
    *puVar6 = uVar1 >> (bVar3 & 0x1f) | param_2;
    puVar6 = puVar6 + 1;
    param_2 = (uVar1 & ~(-1 << (bVar3 & 0x1f))) << (0x20 - bVar3 & 0x1f);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar5 = 2;
  iVar4 = 8;
  do {
    if (iVar5 < iVar2) {
      *(undefined4 *)(iVar4 + (int)param_1) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + (int)param_1) = *(undefined4 *)(iVar4 + iVar2 * -4 + (int)param_1);
    }
    iVar5 = iVar5 + -1;
    iVar4 = iVar4 + -4;
  } while (-1 < iVar4);
  return;
}


/*
 * FUN_10009434 at 10009434
 * undefined4 __cdecl FUN_10009434(ushort * param_1, uint * param_2, int * param_3)
 * Address ranges: 10009434-1000959f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10009434(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_1c [3];
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar1 = param_1[5];
  local_10 = *(uint *)(param_1 + 3);
  local_c = *(uint *)(param_1 + 1);
  uVar3 = uVar1 & 0x7fff;
  iVar4 = uVar3 - 0x3fff;
  local_8 = (uint)*param_1 << 0x10;
  if (iVar4 == -0x3fff) {
    iVar4 = 0;
    iVar2 = FUN_1000938c((int *)&local_10);
    if (iVar2 != 0) {
LAB_10009560:
      uVar5 = 0;
      goto LAB_10009562;
    }
    FUN_10009380(&local_10);
  }
  else {
    FUN_10009365((int)local_1c,&local_10);
    iVar2 = FUN_100092d9((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_10009380(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_10009380(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_100093a7(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_10009562;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_100093a7(&local_10,param_3[3]);
        goto LAB_10009560;
      }
      FUN_10009365((int)&local_10,local_1c);
      FUN_100093a7(&local_10,iVar2 - iVar4);
      FUN_100092d9((int)&local_10,param_3[2]);
      FUN_100093a7(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_10009562:
  local_10 = iVar4 << (0x1fU - (char)param_3[3] & 0x1f) |
             -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 | local_10;
  if (param_3[4] == 0x40) {
    param_2[1] = local_10;
    *param_2 = local_c;
  }
  else if (param_3[4] == 0x20) {
    *param_2 = local_10;
  }
  return uVar5;
}


/*
 * FUN_100095a0 at 100095a0
 * undefined __cdecl FUN_100095a0(ushort * param_1, uint * param_2)
 * Address ranges: 100095a0-100095b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100095a0(ushort *param_1,uint *param_2)

{
  FUN_10009434(param_1,param_2,(int *)&DAT_10011100);
  return;
}


/*
 * FUN_100095b6 at 100095b6
 * undefined __cdecl FUN_100095b6(ushort * param_1, uint * param_2)
 * Address ranges: 100095b6-100095cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100095b6(ushort *param_1,uint *param_2)

{
  FUN_10009434(param_1,param_2,(int *)&DAT_10011118);
  return;
}


/*
 * FUN_100095cc at 100095cc
 * undefined __thiscall FUN_100095cc(void * this, uint * param_1, byte * param_2)
 * Address ranges: 100095cc-100095f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __thiscall FUN_100095cc(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1000a7a0(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_100095a0(local_10,param_1);
  return;
}


/*
 * FUN_100095f9 at 100095f9
 * undefined __thiscall FUN_100095f9(void * this, uint * param_1, byte * param_2)
 * Address ranges: 100095f9-10009625
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __thiscall FUN_100095f9(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1000a7a0(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_100095b6(local_10,param_1);
  return;
}


/*
 * FUN_10009626 at 10009626
 * undefined __cdecl FUN_10009626(char * param_1, int param_2, int param_3)
 * Address ranges: 10009626-1000969c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10009626(char *param_1,int param_2,int param_3)

{
  char *_Str;
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  char *pcVar4;
  char cVar5;
  
  pcVar1 = param_1;
  pcVar4 = *(char **)(param_3 + 0xc);
  _Str = param_1 + 1;
  *param_1 = '0';
  pcVar2 = _Str;
  if (0 < param_2) {
    param_1 = (char *)param_2;
    param_2 = 0;
    do {
      cVar5 = *pcVar4;
      if (cVar5 == '\0') {
        cVar5 = '0';
      }
      else {
        pcVar4 = pcVar4 + 1;
      }
      *pcVar2 = cVar5;
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != (char *)0x0);
  }
  *pcVar2 = '\0';
  if ((-1 < param_2) && ('4' < *pcVar4)) {
    while (pcVar2 = pcVar2 + -1, *pcVar2 == '9') {
      *pcVar2 = '0';
    }
    *pcVar2 = *pcVar2 + '\x01';
  }
  if (*pcVar1 == '1') {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  else {
    sVar3 = _strlen(_Str);
    FUN_10008960((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}


/*
 * FUN_1000969d at 1000969d
 * int * __cdecl FUN_1000969d(undefined4 param_1, undefined4 param_2, int * param_3, uint * param_4)
 * Address ranges: 1000969d-100096f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * __cdecl FUN_1000969d(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined4 in_stack_ffffffbc;
  undefined2 uVar4;
  short local_2c;
  char local_2a;
  uint local_28 [6];
  uint local_10;
  uint uStack_c;
  undefined2 uStack_8;
  
  uVar4 = (undefined2)((uint)in_stack_ffffffbc >> 0x10);
  FUN_100096f9(&local_10,&param_1);
  iVar3 = FUN_1000ac71(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,0,&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_100097b0(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}


/*
 * FUN_100096f9 at 100096f9
 * undefined __cdecl FUN_100096f9(uint * param_1, uint * param_2)
 * Address ranges: 100096f9-100097ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100096f9(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  uVar1 = *(ushort *)((int)param_2 + 6);
  uVar3 = (uVar1 & 0x7ff0) >> 4;
  uVar2 = *param_2;
  local_8 = 0x80000000;
  if (uVar3 == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar2 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      return;
    }
    iVar4 = 0x3c01;
    local_8 = 0;
  }
  else if (uVar3 == 0x7ff) {
    iVar4 = 0x7fff;
  }
  else {
    iVar4 = uVar3 + 0x3c00;
  }
  local_8 = uVar2 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  param_1[1] = local_8;
  *param_1 = uVar2 << 0xb;
  while ((local_8 & 0x80000000) == 0) {
    local_8 = *param_1 >> 0x1f | local_8 * 2;
    *param_1 = *param_1 * 2;
    param_1[1] = local_8;
    iVar4 = iVar4 + 0xffff;
  }
  *(ushort *)(param_1 + 2) = uVar1 & 0x8000 | (ushort)iVar4;
  return;
}


/*
 * FUN_100097b0 at 100097b0
 * uint * __cdecl FUN_100097b0(uint * param_1, uint * param_2)
 * Address ranges: 100097b0-100097b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint * __cdecl FUN_100097b0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = param_1;
  while (((uint)param_2 & 3) != 0) {
    bVar1 = (byte)*param_2;
    uVar3 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_10009898;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10009898:
        *(byte *)puVar4 = (byte)uVar3;
        return param_1;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return param_1;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return param_1;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return param_1;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}


/*
 * FUN_100097c0 at 100097c0
 * uint * __cdecl FUN_100097c0(uint * param_1, uint * param_2)
 * Address ranges: 100097c0-1000989f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint * __cdecl FUN_100097c0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_100097dc;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1000980f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1000982b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_100097dc:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1000982b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1000982b;
    }
  }
LAB_1000980f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1000982b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10009898:
            *(byte *)puVar5 = (byte)uVar4;
            return param_1;
          }
          if ((char)(uVar4 >> 8) == '\0') {
            *(short *)puVar5 = (short)uVar4;
            return param_1;
          }
          if ((uVar4 & 0xff0000) == 0) {
            *(short *)puVar5 = (short)uVar4;
            *(byte *)((int)puVar5 + 2) = 0;
            return param_1;
          }
          if ((uVar4 & 0xff000000) == 0) {
            *puVar5 = uVar4;
            return param_1;
          }
        }
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while( true );
    }
    bVar1 = (byte)*param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_10009898;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}


/*
 * __fptrap at 100098a0
 * void __cdecl __fptrap(void)
 * Address ranges: 100098a0-100098a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __fptrap  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __fptrap
   
   Library: Visual Studio 2003 Release */

void __cdecl __fptrap(void)

{
  __amsg_exit(2);
  return;
}


/*
 * FUN_100098a9 at 100098a9
 * undefined4 __cdecl FUN_100098a9(int param_1)
 * Address ranges: 100098a9-10009a55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100098a9(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  BYTE *pBVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  _cpinfo local_1c;
  uint local_8;
  
  FUN_10006171(0x19);
  CodePage = FUN_10009a56(param_1);
  if (CodePage != DAT_101f5730) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_100111c0;
LAB_100098e6:
      if (*pUVar5 != CodePage) goto code_r0x100098ea;
      local_8 = 0;
      puVar15 = &DAT_101f5860;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x100111d0);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_100111b8)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_101f5860 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          pbVar11 = pbVar11 + 2;
          bVar3 = *pbVar11;
        }
        local_8 = local_8 + 1;
        pbVar13 = pbVar13 + 8;
      } while (local_8 < 4);
      _DAT_101f574c = 1;
      DAT_101f5730 = CodePage;
      DAT_101f5964 = FUN_10009aa0(CodePage);
      DAT_101f5740 = *(undefined4 *)(iVar12 + 0x100111c4);
      DAT_101f5744 = *(undefined4 *)(iVar12 + 0x100111c8);
      DAT_101f5748 = *(undefined4 *)(iVar12 + 0x100111cc);
      goto LAB_10009a3a;
    }
    goto LAB_10009a35;
  }
  goto LAB_100098d0;
code_r0x100098ea:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x100112af < (int)pUVar5) goto code_r0x100098f5;
  goto LAB_100098e6;
code_r0x100098f5:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_101f5964 = 0;
    puVar15 = &DAT_101f5860;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_101f574c = 0;
      DAT_101f5730 = CodePage;
    }
    else {
      DAT_101f5730 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_101f5860 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_101f5860 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_101f5964 = FUN_10009aa0(CodePage);
      _DAT_101f574c = 1;
    }
    DAT_101f5740 = 0;
    DAT_101f5744 = 0;
    DAT_101f5748 = 0;
  }
  else {
    if (DAT_100e3c4c == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10009a47;
    }
LAB_10009a35:
    FUN_10009ad3();
  }
LAB_10009a3a:
  FUN_10009afc();
LAB_100098d0:
  uVar14 = 0;
LAB_10009a47:
  FUN_100061d2(0x19);
  return uVar14;
}


/*
 * FUN_10009a56 at 10009a56
 * int __cdecl FUN_10009a56(int param_1)
 * Address ranges: 10009a56-10009a9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10009a56(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_100e3c4c = 1;
                    /* WARNING: Could not recover jumptable at 0x10009a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_100e3c4c = 1;
                    /* WARNING: Could not recover jumptable at 0x10009a85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_100e3c84;
  }
  DAT_100e3c4c = (uint)bVar2;
  return param_1;
}


/*
 * FUN_10009aa0 at 10009aa0
 * undefined4 __cdecl FUN_10009aa0(int param_1)
 * Address ranges: 10009aa0-10009ad2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10009aa0(int param_1)

{
  if (param_1 == 0x3a4) {
    return 0x411;
  }
  if (param_1 == 0x3a8) {
    return 0x804;
  }
  if (param_1 == 0x3b5) {
    return 0x412;
  }
  if (param_1 != 0x3b6) {
    return 0;
  }
  return 0x404;
}


/*
 * FUN_10009ad3 at 10009ad3
 * undefined __stdcall FUN_10009ad3(void)
 * Address ranges: 10009ad3-10009afb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009ad3(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_101f5860;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_101f5730 = 0;
  _DAT_101f574c = 0;
  DAT_101f5964 = 0;
  DAT_101f5740 = 0;
  DAT_101f5744 = 0;
  DAT_101f5748 = 0;
  return;
}


/*
 * FUN_10009afc at 10009afc
 * undefined __stdcall FUN_10009afc(void)
 * Address ranges: 10009afc-10009c80
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10009afc(void)

{
  byte *pbVar1;
  BOOL BVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined1 uVar8;
  BYTE *pBVar9;
  CHAR *pCVar10;
  WORD local_518 [256];
  WCHAR local_318 [128];
  WCHAR local_218 [128];
  CHAR local_118 [256];
  _cpinfo local_18;
  
  BVar2 = GetCPInfo(DAT_101f5730,&local_18);
  if (BVar2 == 1) {
    uVar3 = 0;
    do {
      local_118[uVar3] = (CHAR)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    local_118[0] = ' ';
    if (local_18.LeadByte[0] != 0) {
      pBVar9 = local_18.LeadByte + 1;
      do {
        uVar3 = (uint)local_18.LeadByte[0];
        if (uVar3 <= *pBVar9) {
          uVar5 = (*pBVar9 - uVar3) + 1;
          uVar6 = uVar5 >> 2;
          pCVar10 = local_118 + uVar3;
          while (uVar6 != 0) {
            uVar6 = uVar6 - 1;
            builtin_memcpy(pCVar10,"    ",4);
            pCVar10 = pCVar10 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pCVar10 = ' ';
            pCVar10 = pCVar10 + 1;
          }
        }
        local_18.LeadByte[0] = pBVar9[1];
        pBVar9 = pBVar9 + 2;
      } while (local_18.LeadByte[0] != 0);
    }
    FUN_1000a267(1,local_118,0x100,local_518,DAT_101f5730,DAT_101f5964,0);
    FUN_1000a3b0(DAT_101f5964,0x100,local_118,0x100,local_218,0x100,DAT_101f5730,0);
    FUN_1000a3b0(DAT_101f5964,0x200,local_118,0x100,local_318,0x100,DAT_101f5730,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_101f5860 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_10009c08;
        }
        (&DAT_101f5760)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_101f5860 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_10009c08:
        (&DAT_101f5760)[uVar3] = uVar8;
      }
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      if ((uVar3 < 0x41) || (0x5a < uVar3)) {
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          pbVar1 = (byte *)((int)&DAT_101f5860 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_10009c52;
        }
        (&DAT_101f5760)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_101f5860 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_10009c52:
        (&DAT_101f5760)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}


/*
 * FUN_10009c81 at 10009c81
 * undefined __stdcall FUN_10009c81(void)
 * Address ranges: 10009c81-10009c9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10009c81(void)

{
  if (DAT_101f5a88 == 0) {
    FUN_100098a9(-3);
    DAT_101f5a88 = 1;
  }
  return;
}


/*
 * FUN_10009c9d at 10009c9d
 * int __cdecl FUN_10009c9d(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10009c9d-10009d25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10009c9d(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_100e3c50 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_100e3c50 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_100e3c50 != (FARPROC)0x0) {
        DAT_100e3c54 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_100e3c58 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10009cec;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10009cec:
    if (DAT_100e3c54 != (FARPROC)0x0) {
      iVar1 = (*DAT_100e3c54)();
      if ((iVar1 != 0) && (DAT_100e3c58 != (FARPROC)0x0)) {
        iVar1 = (*DAT_100e3c58)(iVar1);
      }
    }
    iVar1 = (*DAT_100e3c50)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}


/*
 * _strncpy at 10009d30
 * char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count)
 * Address ranges: 10009d30-10009e2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _strncpy  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x10009d6e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_10009dab;
        goto LAB_10009e19;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x10009e15:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10009e19:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_10009dab;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10009e15;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10009e15;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10009e15;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x10009d6e:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_10009dab:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}


/*
 * FUN_10009e2e at 10009e2e
 * int __cdecl FUN_10009e2e(uint param_1, int param_2)
 * Address ranges: 10009e2e-10009f52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10009e2e(uint param_1,int param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  DWORD *pDVar6;
  HANDLE hFile;
  BOOL BVar7;
  int iVar8;
  uint uVar9;
  char local_1008 [4064];
  undefined4 uStackY_28;
  
  FUN_10008930();
  iVar8 = 0;
  DVar1 = FUN_100081d3(param_1,0,1);
  if ((DVar1 == 0xffffffff) || (DVar2 = FUN_100081d3(param_1,0,2), DVar2 == 0xffffffff)) {
    iVar8 = -1;
  }
  else {
    uVar9 = param_2 - DVar2;
    if ((int)uVar9 < 1) {
      if ((int)uVar9 < 0) {
        FUN_100081d3(param_1,param_2,0);
        hFile = (HANDLE)FUN_10008018(param_1);
        BVar7 = SetEndOfFile(hFile);
        iVar8 = (BVar7 != 0) - 1;
        if (iVar8 == -1) {
          pDVar6 = FUN_10007de8();
          *pDVar6 = 0xd;
          DVar2 = GetLastError();
          pDVar6 = FUN_10007df1();
          *pDVar6 = DVar2;
        }
      }
    }
    else {
      _memset(local_1008,0,0x1000);
      uStackY_28 = 0x10009e9b;
      iVar3 = FUN_1000af04(param_1,0x8000);
      do {
        uVar4 = 0x1000;
        if ((int)uVar9 < 0x1000) {
          uVar4 = uVar9;
        }
        iVar5 = FUN_100048eb(param_1,local_1008,uVar4);
        if (iVar5 == -1) {
          pDVar6 = FUN_10007df1();
          if (*pDVar6 == 5) {
            pDVar6 = FUN_10007de8();
            *pDVar6 = 0xd;
          }
          iVar8 = -1;
          break;
        }
        uVar9 = uVar9 - iVar5;
      } while (0 < (int)uVar9);
      FUN_1000af04(param_1,iVar3);
    }
    FUN_100081d3(param_1,DVar1,0);
  }
  return iVar8;
}


/*
 * FUN_10009f53 at 10009f53
 * int __cdecl FUN_10009f53(uint param_1, char * param_2, char * param_3)
 * Address ranges: 10009f53-1000a12b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10009f53(uint param_1,char *param_2,char *param_3)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  BOOL BVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  char *pcVar8;
  int iVar9;
  DWORD local_10;
  char *local_c;
  char local_5;
  
  local_c = (char *)0x0;
  if (param_3 != (char *)0x0) {
    piVar1 = &DAT_101f5980 + ((int)param_1 >> 5);
    iVar9 = (param_1 & 0x1f) * 0x24;
    bVar4 = *(byte *)((&DAT_101f5980)[(int)param_1 >> 5] + iVar9 + 4);
    if ((bVar4 & 2) == 0) {
      pcVar8 = param_2;
      if (((bVar4 & 0x48) != 0) &&
         (cVar3 = *(char *)((&DAT_101f5980)[(int)param_1 >> 5] + iVar9 + 5), cVar3 != '\n')) {
        param_3 = param_3 + -1;
        *param_2 = cVar3;
        pcVar8 = param_2 + 1;
        local_c = (char *)0x1;
        *(undefined1 *)(*piVar1 + 5 + iVar9) = 10;
      }
      BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),pcVar8,(DWORD)param_3,&local_10,
                       (LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
        DVar6 = GetLastError();
        if (DVar6 == 5) {
          pDVar7 = FUN_10007de8();
          *pDVar7 = 9;
          pDVar7 = FUN_10007df1();
          *pDVar7 = 5;
        }
        else {
          if (DVar6 == 0x6d) {
            return 0;
          }
          FUN_10007d75(DVar6);
        }
        return -1;
      }
      bVar4 = *(byte *)(*piVar1 + 4 + iVar9);
      if ((bVar4 & 0x80) == 0) {
        return (int)local_c + local_10;
      }
      if ((local_10 == 0) || (*param_2 != '\n')) {
        bVar4 = bVar4 & 0xfb;
      }
      else {
        bVar4 = bVar4 | 4;
      }
      *(byte *)(*piVar1 + 4 + iVar9) = bVar4;
      param_3 = param_2;
      local_c = param_2 + (int)local_c + local_10;
      pcVar8 = param_2;
      if (param_2 < local_c) {
        do {
          cVar3 = *param_3;
          if (cVar3 == '\x1a') {
            pbVar2 = (byte *)(*piVar1 + 4 + iVar9);
            bVar4 = *pbVar2;
            if ((bVar4 & 0x40) == 0) {
              *pbVar2 = bVar4 | 2;
            }
            break;
          }
          if (cVar3 == '\r') {
            if (param_3 < local_c + -1) {
              if (param_3[1] == '\n') {
                param_3 = param_3 + 2;
                goto LAB_1000a0de;
              }
              *pcVar8 = '\r';
              pcVar8 = pcVar8 + 1;
              param_3 = param_3 + 1;
            }
            else {
              param_3 = param_3 + 1;
              BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),&local_5,1,&local_10,(LPOVERLAPPED)0x0);
              if (((BVar5 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) || (local_10 == 0)) {
LAB_1000a0f8:
                *pcVar8 = '\r';
LAB_1000a0fb:
                pcVar8 = pcVar8 + 1;
              }
              else if ((*(byte *)(*piVar1 + 4 + iVar9) & 0x48) == 0) {
                if ((pcVar8 == param_2) && (local_5 == '\n')) {
LAB_1000a0de:
                  *pcVar8 = '\n';
                  goto LAB_1000a0fb;
                }
                FUN_100081d3(param_1,-1,1);
                if (local_5 != '\n') goto LAB_1000a0f8;
              }
              else {
                if (local_5 == '\n') goto LAB_1000a0de;
                *pcVar8 = '\r';
                pcVar8 = pcVar8 + 1;
                *(char *)(*piVar1 + 5 + iVar9) = local_5;
              }
            }
          }
          else {
            *pcVar8 = cVar3;
            pcVar8 = pcVar8 + 1;
            param_3 = param_3 + 1;
          }
        } while (param_3 < local_c);
      }
      return (int)pcVar8 - (int)param_2;
    }
  }
  return 0;
}


/*
 * FUN_1000a12c at 1000a12c
 * uint __cdecl FUN_1000a12c(uint param_1)
 * Address ranges: 1000a12c-1000a19a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_1000a12c(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_100e3c74 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_101f572c);
    bVar1 = DAT_101f5728 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_101f572c);
      this = (void *)0x13;
      FUN_10006171(0x13);
    }
    param_1 = FUN_1000a19b(this,param_1);
    if (bVar1) {
      FUN_100061d2(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_101f572c);
    }
  }
  return param_1;
}


/*
 * FUN_1000a19b at 1000a19b
 * uint __thiscall FUN_1000a19b(void * this, uint param_1)
 * Address ranges: 1000a19b-1000a266
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __thiscall FUN_1000a19b(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_100e3c74 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_100110f0 < 2) {
        uVar2 = (byte)PTR_DAT_10010ee0[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_1000908b(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10010ee0[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1000a3b0(DAT_100e3c74,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)local_8 & 0xff;
      }
      else {
        uVar1 = (uint)local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}


/*
 * FUN_1000a267 at 1000a267
 * BOOL __cdecl FUN_1000a267(DWORD param_1, LPCSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6, int param_7)
 * Address ranges: 1000a267-1000a35f;1000a36b-1000a3af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


BOOL __cdecl
FUN_1000a267(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  undefined1 *puVar1;
  BOOL BVar2;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000c650;
  puStack_10 = &LAB_100062e0;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_100e3ca0;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_100e3ca0 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    iVar3 = 1;
    puVar1 = local_1c;
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      iVar3 = 2;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  DAT_100e3ca0 = iVar3;
  if (DAT_100e3ca0 != 2) {
    if (DAT_100e3ca0 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_100e3c84;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10008930();
        local_1c = &stack0xffffffc8;
        _memset(&stack0xffffffc8,0,iVar3 * 2);
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x38) &&
           (iVar3 = MultiByteToWideChar(param_5,1,param_2,param_3,(LPWSTR)&stack0xffffffc8,iVar3),
           iVar3 != 0)) {
          BVar2 = GetStringTypeW(param_1,(LPCWSTR)&stack0xffffffc8,iVar3,param_4);
          ExceptionList = local_14;
          return BVar2;
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  if (param_6 == 0) {
    param_6 = DAT_100e3c74;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}


/*
 * FUN_1000a3b0 at 1000a3b0
 * int __cdecl FUN_1000a3b0(LCID param_1, uint param_2, char * param_3, int param_4, LPWSTR param_5, int param_6, UINT param_7, int param_8)
 * Address ranges: 1000a3b0-1000a4bf;1000a4d3-1000a573;1000a586-1000a5d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl
FUN_1000a3b0(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000c660;
  puStack_10 = &LAB_100062e0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_100e3ca4 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_100e3ca4 = 2;
    }
    else {
      DAT_100e3ca4 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_1000a5d4(param_3,param_4);
  }
  if (DAT_100e3ca4 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_100e3ca4 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_100e3c84;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10008930();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10008930();
            local_8 = 0xffffffff;
            if (&stack0x00000000 == (undefined1 *)0x3c) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,
                                 (LPWSTR)&stack0xffffffc4,iVar2);
            if (iVar1 == 0) {
              ExceptionList = local_14;
              return 0;
            }
            if (param_6 == 0) {
              param_6 = 0;
              param_5 = (LPWSTR)0x0;
            }
            iVar2 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffc4,iVar2,(LPSTR)param_5
                                        ,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
            iVar1 = iVar2;
          }
          else {
            if (param_6 == 0) {
              ExceptionList = local_14;
              return iVar2;
            }
            if (param_6 < iVar2) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,param_5,param_6);
          }
          if (iVar1 != 0) {
            ExceptionList = local_14;
            return iVar2;
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}


/*
 * FUN_1000a5d4 at 1000a5d4
 * int __cdecl FUN_1000a5d4(char * param_1, int param_2)
 * Address ranges: 1000a5d4-1000a5fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_1000a5d4(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (pcVar1 = param_1; (iVar2 != 0 && (iVar2 = iVar2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
  {
  }
  if (*pcVar1 != '\0') {
    return param_2;
  }
  return (int)pcVar1 - (int)param_1;
}


/*
 * FUN_1000a5ff at 1000a5ff
 * undefined4 __cdecl FUN_1000a5ff(uint param_1, uint param_2, uint * param_3)
 * Address ranges: 1000a5ff-1000a61f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_1000a5ff(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = param_1 + param_2;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}


/*
 * ___add_12 at 1000a620
 * undefined __cdecl ___add_12(uint * param_1, uint * param_2)
 * Address ranges: 1000a620-1000a67d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  ___add_12  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1000a5ff(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_1000a5ff(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_1000a5ff(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_1000a5ff(param_1[2],param_2[2],param_1 + 2);
  return;
}


/*
 * FUN_1000a67e at 1000a67e
 * undefined __cdecl FUN_1000a67e(uint * param_1)
 * Address ranges: 1000a67e-1000a6ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_1000a67e(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] << 1 | uVar2 >> 0x1f;
  return;
}


/*
 * FUN_1000a6ac at 1000a6ac
 * undefined __cdecl FUN_1000a6ac(uint * param_1)
 * Address ranges: 1000a6ac-1000a6d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_1000a6ac(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}


/*
 * FUN_1000a6d9 at 1000a6d9
 * undefined __cdecl FUN_1000a6d9(char * param_1, int param_2, uint * param_3)
 * Address ranges: 1000a6d9-1000a79f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_1000a6d9(char *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar1 = param_3;
  local_8 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    param_3 = (uint *)param_2;
    do {
      local_14 = *puVar1;
      local_10 = puVar1[1];
      local_c = puVar1[2];
      FUN_1000a67e(puVar1);
      FUN_1000a67e(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_1000a67e(puVar1);
      local_10 = 0;
      local_c = 0;
      local_14 = (uint)*param_1;
      ___add_12(puVar1,&local_14);
      param_1 = param_1 + 1;
      param_3 = (uint *)((int)param_3 + -1);
    } while (param_3 != (uint *)0x0);
  }
  while (puVar1[2] == 0) {
    puVar1[2] = puVar1[1] >> 0x10;
    local_8 = local_8 + 0xfff0;
    puVar1[1] = *puVar1 >> 0x10 | puVar1[1] << 0x10;
    *puVar1 = *puVar1 << 0x10;
  }
  while ((puVar1[2] & 0x8000) == 0) {
    FUN_1000a67e(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}


/*
 * FUN_1000a7a0 at 1000a7a0
 * undefined4 __thiscall FUN_1000a7a0(void * this, ushort * param_1, int * param_2, byte * param_3, int param_4, int param_5, int param_6, int param_7)
 * Address ranges: 1000a7a0-1000ac40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __thiscall
FUN_1000a7a0(void *this,ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  char local_60 [23];
  char local_49;
  ushort local_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  byte *local_3e;
  ushort local_3a;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  byte *local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  char *local_10;
  int local_c;
  uint local_8;
  
  local_10 = local_60;
  local_2c = 0;
  local_1c = 1;
  local_8 = 0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_30 = 0;
  local_34 = 0;
  local_20 = (byte *)0x0;
  local_c = 0;
  local_18 = 0;
  pbVar8 = param_3;
  while( true ) {
    bVar6 = *pbVar8;
    this = (void *)CONCAT31((int3)((uint)this >> 8),bVar6);
    if ((((bVar6 != 0x20) && (bVar6 != 9)) && (bVar6 != 10)) && (bVar6 != 0xd)) break;
    pbVar8 = pbVar8 + 1;
  }
  iVar1 = 4;
  iVar9 = 0;
  iVar5 = local_14;
LAB_1000a7f7:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_1000a814:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_1000aa39;
    }
    if (bVar6 == DAT_100110f4) goto LAB_1000a823;
    if (bVar6 == 0x2b) {
      local_2c = 0;
      iVar9 = 2;
      iVar5 = local_14;
    }
    else if (bVar6 == 0x2d) {
      local_2c = 0x8000;
      iVar9 = 2;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_1000ab13;
    }
    goto LAB_1000a7f7;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_1000a814;
    iVar9 = iVar1;
    if (bVar6 != DAT_100110f4) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_1000a8a8;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_1000a881;
    }
    goto LAB_1000a7f7;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_1000a814;
    if (bVar6 == DAT_100110f4) {
LAB_1000a823:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_1000ab18;
    }
    goto LAB_1000a7f7;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_100110f0 < 2) {
        uVar3 = (byte)PTR_DAT_10010ee0[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_10010ee0;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_1000908b(this,(uint)bVar6,4);
        this = pbVar7;
      }
      if (uVar3 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        pcVar4 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar4;
      }
      else {
        local_c = local_c + 1;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    iVar9 = iVar1;
    iVar5 = local_14;
    if (bVar6 != DAT_100110f4) goto LAB_1000a995;
    goto LAB_1000a7f7;
  case 4:
    local_14 = 1;
    local_28 = 1;
    iVar9 = iVar5;
    if (local_8 == 0) {
      while (iVar5 = local_28, iVar9 = local_14, bVar6 == 0x30) {
        local_c = local_c + -1;
        bVar6 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      }
    }
    while( true ) {
      local_14 = iVar9;
      local_28 = iVar5;
      if (DAT_100110f0 < 2) {
        uVar3 = (byte)PTR_DAT_10010ee0[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_10010ee0;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_1000908b(this,(uint)bVar6,4);
        this = pbVar7;
      }
      if (uVar3 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        local_c = local_c + -1;
        pcVar4 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar4;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      iVar5 = local_28;
      iVar9 = local_14;
    }
LAB_1000a995:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_1000a8a8:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_1000a881:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_1000ab13;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_1000a7f7;
  case 5:
    local_28 = iVar5;
    if (DAT_100110f0 < 2) {
      uVar3 = (byte)PTR_DAT_10010ee0[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_10010ee0;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_1000908b(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_1000aa39;
    goto LAB_1000ab18;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_1000aa6e;
      if (bVar6 == 0x2d) goto LAB_1000aa62;
      if (bVar6 != 0x30) goto LAB_1000ab18;
LAB_1000aa07:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_1000a7f7;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_1000aa07;
      goto LAB_1000ab18;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_1000ab13;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_1000aa99;
  default:
    goto switchD_1000a803_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_1000aa6e:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_1000ab18;
LAB_1000aa62:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_1000a7f7;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_1000a803_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_1000a7f7;
    goto LAB_1000ab18;
  }
  iVar9 = 9;
LAB_1000aa39:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_1000a7f7;
LAB_1000aa99:
  if (DAT_100110f0 < 2) {
    uVar3 = (byte)PTR_DAT_10010ee0[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_10010ee0;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_1000908b(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_1000aae3;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_1000aadb;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_1000aa99;
LAB_1000aadb:
  pbVar7 = (byte *)0x1451;
LAB_1000aae3:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_100110f0 < 2) {
      uVar3 = (byte)PTR_DAT_10010ee0[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_10010ee0;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_1000908b(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_1000ab13:
  pbVar7 = pbVar8 + -1;
LAB_1000ab18:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_1000ac26;
  }
  pcVar4 = local_10;
  if (0x18 < local_8) {
    if ('\x04' < local_49) {
      local_49 = local_49 + '\x01';
    }
    local_8 = 0x18;
    local_c = local_c + 1;
    pcVar4 = local_10 + -1;
  }
  if (local_8 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
  }
  else {
    while (pcVar4 = pcVar4 + -1, *pcVar4 == '\0') {
      local_8 = local_8 - 1;
      local_c = local_c + 1;
    }
    FUN_1000a6d9(local_60,local_8,(uint *)&local_44);
    pbVar8 = local_20;
    if (local_1c < 0) {
      pbVar8 = (byte *)-(int)local_20;
    }
    pbVar8 = pbVar8 + local_c;
    if (local_24 == 0) {
      pbVar8 = pbVar8 + param_5;
    }
    if (local_28 == 0) {
      pbVar8 = pbVar8 + -param_6;
    }
    if ((int)pbVar8 < 0x1451) {
      if (-0x1451 < (int)pbVar8) {
        FUN_1000b29a((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_1000abab;
      }
      local_34 = 1;
    }
    else {
      local_30 = 1;
    }
    local_3a = (ushort)param_3;
    local_3e = param_3;
    local_44 = local_3a;
  }
LAB_1000abab:
  if (local_30 == 0) {
    if (local_34 != 0) {
      local_44 = 0;
      local_3a = 0;
      local_3e = (byte *)0x0;
      param_3 = (byte *)0x0;
      local_18 = 1;
    }
  }
  else {
    param_3 = (byte *)0x0;
    local_3a = 0x7fff;
    local_3e = (byte *)0x80000000;
    local_44 = 0;
    local_18 = 2;
  }
LAB_1000ac26:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}


/*
 * FUN_1000ac71 at 1000ac71
 * undefined4 __cdecl FUN_1000ac71(uint param_1, uint param_2, uint param_3, int param_4, byte param_5, short * param_6)
 * Address ranges: 1000ac71-1000af03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl
FUN_1000ac71(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  uint uVar2;
  short *psVar3;
  char cVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined1 local_a;
  char cStack_9;
  undefined4 local_8;
  
  psVar3 = param_6;
  uVar5 = param_3 & 0x7fff;
  local_20 = 0xcc;
  local_1f = 0xcc;
  local_1e = 0xcc;
  local_1d = 0xcc;
  local_1c = 0xcc;
  local_1b = 0xcc;
  local_1a = 0xcc;
  local_19 = 0xcc;
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xfb;
  local_15 = 0x3f;
  local_8 = 1;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar5 != 0) || (param_2 != 0)) || (param_1 != 0)) {
    if ((short)uVar5 == 0x7fff) {
      *param_6 = 1;
      if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
        if (((param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1000ad66;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_1000ad66:
            pcVar11 = "1#QNAN";
            goto LAB_1000ad6b;
          }
          pcVar11 = "1#IND";
        }
        FUN_100097b0((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_1000ad6b:
        FUN_100097b0((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 6;
      }
      return 0;
    }
    local_14 = 0;
    local_a = (undefined1)uVar5;
    cStack_9 = (char)(uVar5 >> 8);
    sVar8 = (short)(((uVar5 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar5 * 0x4d10 >>
                   0x10);
    local_e = param_2;
    local_12 = param_1;
    FUN_1000b29a((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_1000b07a((int *)&local_14,(int *)&local_20);
    }
    *psVar3 = sVar8;
    iVar10 = param_4;
    if (((param_5 & 1) == 0) || (iVar10 = param_4 + sVar8, 0 < param_4 + sVar8)) {
      if (0x15 < iVar10) {
        iVar10 = 0x15;
      }
      iVar9 = CONCAT11(cStack_9,local_a) - 0x3ffe;
      local_a = 0;
      cStack_9 = '\0';
      param_6 = (short *)0x8;
      do {
        FUN_1000a67e((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_1000a6ac((uint *)&local_14);
        }
      }
      param_4 = iVar10 + 1;
      psVar6 = psVar3 + 2;
      param_6 = psVar6;
      uVar5 = local_12;
      uVar2 = local_e;
      if (0 < param_4) {
        do {
          local_e._2_2_ = (undefined2)(uVar2 >> 0x10);
          local_e._0_2_ = (undefined2)uVar2;
          local_12._2_2_ = (undefined2)(uVar5 >> 0x10);
          local_12._0_2_ = (undefined2)uVar5;
          param_1 = CONCAT22((undefined2)local_12,local_14);
          param_2 = CONCAT22((undefined2)local_e,local_12._2_2_);
          param_3 = CONCAT13(cStack_9,CONCAT12(local_a,local_e._2_2_));
          local_12 = uVar5;
          local_e = uVar2;
          FUN_1000a67e((uint *)&local_14);
          FUN_1000a67e((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_1000a67e((uint *)&local_14);
          cVar4 = cStack_9;
          cStack_9 = '\0';
          psVar6 = (short *)((int)param_6 + 1);
          param_4 = param_4 + -1;
          *(char *)param_6 = cVar4 + '0';
          param_6 = psVar6;
          uVar5 = local_12;
          uVar2 = local_e;
        } while (param_4 != 0);
      }
      psVar7 = psVar6 + -1;
      psVar1 = psVar3 + 2;
      if ('4' < *(char *)((int)psVar6 + -1)) {
        for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
          if ((char)*psVar7 != '9') {
            if (psVar1 <= psVar7) goto LAB_1000aec3;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_1000aec3:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_1000aec5:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_1000aec5;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_1000aefb;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_1000aefb:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}


/*
 * FUN_1000af04 at 1000af04
 * int __cdecl FUN_1000af04(uint param_1, int param_2)
 * Address ranges: 1000af04-1000af64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_1000af04(uint param_1,int param_2)

{
  byte bVar1;
  DWORD *pDVar2;
  byte bVar3;
  
  bVar1 = *(byte *)((&DAT_101f5980)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
  if (param_2 == 0x8000) {
    bVar3 = bVar1 & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      pDVar2 = FUN_10007de8();
      *pDVar2 = 0x16;
      return -1;
    }
    bVar3 = bVar1 | 0x80;
  }
  *(byte *)((&DAT_101f5980)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = bVar3;
  return (-(uint)((bVar1 & 0x80) != 0) & 0xffffc000) + 0x8000;
}


/*
 * FUN_1000b000 at 1000b000
 * int __cdecl FUN_1000b000(byte * param_1, byte * param_2)
 * Address ranges: 1000b000-1000b03d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_1000b000(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  iVar2 = -1;
  do {
    iVar2 = iVar2 + 1;
    bVar1 = *param_1;
    if (bVar1 == 0) {
      return iVar2;
    }
    param_1 = param_1 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return iVar2;
}


/*
 * FUN_1000b040 at 1000b040
 * byte * __cdecl FUN_1000b040(byte * param_1, byte * param_2)
 * Address ranges: 1000b040-1000b079
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


byte * __cdecl FUN_1000b040(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = param_1;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (byte *)0x0;
    }
    param_1 = pbVar2 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return pbVar2;
}


/*
 * FUN_1000b07a at 1000b07a
 * undefined __cdecl FUN_1000b07a(int * param_1, int * param_2)
 * Address ranges: 1000b07a-1000b299
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_1000b07a(int *param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  ushort uVar11;
  byte local_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  short local_24;
  undefined2 uStack_22;
  undefined2 local_20;
  undefined1 uStack_1e;
  byte bStack_1d;
  int *local_1c;
  int local_18;
  int local_14;
  ushort *local_10;
  ushort *local_c;
  short *local_8;
  
  piVar5 = param_2;
  piVar4 = param_1;
  local_18 = 0;
  local_28 = 0;
  uStack_27 = 0;
  uStack_26 = 0;
  local_24 = 0;
  uStack_22 = 0;
  local_20 = 0;
  uStack_1e = 0;
  bStack_1d = 0;
  uVar7 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar10 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar11 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar6 = (ushort)uVar7;
  piVar1 = (int *)(uVar10 + uVar7);
  if (((uVar6 < 0x7fff) && (uVar9 = (ushort)uVar10, uVar9 < 0x7fff)) && ((ushort)piVar1 < 0xbffe)) {
    if ((ushort)piVar1 < 0x3fc0) {
LAB_1000b11d:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_1000b11d;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_1000a5ff(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
                                 (uint *)(local_8 + -2));
            if (iVar8 != 0) {
              *local_8 = *local_8 + 1;
            }
            local_c = local_c + 1;
            local_10 = local_10 + -1;
            local_1c = (int *)((int)local_1c + -1);
          } while (local_1c != (int *)0x0);
        }
        local_8 = local_8 + 1;
        local_14 = local_14 + 1;
        param_2 = (int *)((int)param_2 + -1);
      } while (0 < (int)param_2);
      param_1 = (int *)((int)param_1 + 0xc002);
      if ((short)(ushort)param_1 < 1) {
LAB_1000b1d1:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_1000a6ac((uint *)&local_28);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          if (local_18 != 0) {
            local_28 = local_28 | 1;
          }
        }
      }
      else {
        do {
          if ((bStack_1d & 0x80) != 0) break;
          FUN_1000a67e((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_1000b1d1;
      }
      if ((0x8000 < CONCAT11(uStack_27,local_28)) ||
         (sVar2 = CONCAT11(bStack_1d,uStack_1e), iVar3 = CONCAT22(local_20,uStack_22),
         iVar8 = CONCAT22(local_24,uStack_26),
         (CONCAT22(uStack_26,CONCAT11(uStack_27,local_28)) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(local_24,uStack_26) == -1) {
          iVar8 = 0;
          if (CONCAT22(local_20,uStack_22) == -1) {
            if (CONCAT11(bStack_1d,uStack_1e) == -1) {
              param_1._0_2_ = (ushort)param_1 + 1;
              sVar2 = -0x8000;
              iVar3 = 0;
              iVar8 = 0;
            }
            else {
              sVar2 = CONCAT11(bStack_1d,uStack_1e) + 1;
              iVar3 = 0;
              iVar8 = 0;
            }
          }
          else {
            sVar2 = CONCAT11(bStack_1d,uStack_1e);
            iVar3 = CONCAT22(local_20,uStack_22) + 1;
          }
        }
        else {
          iVar8 = CONCAT22(local_24,uStack_26) + 1;
          sVar2 = CONCAT11(bStack_1d,uStack_1e);
          iVar3 = CONCAT22(local_20,uStack_22);
        }
      }
      local_24 = (short)((uint)iVar8 >> 0x10);
      uStack_26 = (undefined2)iVar8;
      local_20 = (undefined2)((uint)iVar3 >> 0x10);
      uStack_22 = (undefined2)iVar3;
      bStack_1d = (byte)((ushort)sVar2 >> 8);
      uStack_1e = (undefined1)sVar2;
      if (0x7ffe < (ushort)param_1) goto LAB_1000b27a;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_1000b27a:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}


/*
 * FUN_1000b29a at 1000b29a
 * undefined __cdecl FUN_1000b29a(int * param_1, uint param_2, int param_3)
 * Address ranges: 1000b29a-1000b315
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_1000b29a(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  undefined *puStack_8;
  
  ppuVar3 = &PTR_DAT_10011460;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x100115c0;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
    while (param_2 != 0) {
      ppuVar3 = ppuVar3 + 0x15;
      uVar1 = (int)param_2 >> 3;
      uVar2 = param_2 & 7;
      param_2 = uVar1;
      if (uVar2 != 0) {
        ppuVar4 = ppuVar3 + uVar2 * 3;
        if (0x7fff < *(ushort *)(ppuVar3 + uVar2 * 3)) {
          local_10 = SUB42(*ppuVar4,0);
          local_e._0_2_ = (undefined2)((uint)*ppuVar4 >> 0x10);
          local_e._2_2_ = SUB42(ppuVar4[1],0);
          uStack_a = (undefined2)((uint)ppuVar4[1] >> 0x10);
          puStack_8 = ppuVar4[2];
          local_e = CONCAT22(local_e._2_2_,(undefined2)local_e) + -1;
          ppuVar4 = (undefined **)&local_10;
        }
        FUN_1000b07a(param_1,(int *)ppuVar4);
      }
    }
  }
  return;
}


/*
 * FUN_1000b320 at 1000b320
 * uint __thiscall FUN_1000b320(void * this, byte * param_1, byte * param_2)
 * Address ranges: 1000b320-1000b3ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_1000b320(void *this,byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  void *extraout_ECX;
  void *this_00;
  void *extraout_ECX_00;
  uint uVar8;
  uint uVar9;
  uint uVar7;
  
  iVar2 = _DAT_101f572c;
  if (DAT_100e3c74 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1000b36e;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    cVar6 = (bVar5 < bVar3) * -2 + '\x01';
LAB_1000b36e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_101f572c = _DAT_101f572c + 1;
    UNLOCK();
    bVar1 = 0 < DAT_101f5728;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_101f572c = iVar2;
      FUN_10006171(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1000b3cf;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_1000916f(this,uVar8);
      uVar7 = FUN_1000916f(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1000b3cf:
    if (uVar9 == 0) {
      LOCK();
      _DAT_101f572c = _DAT_101f572c + -1;
      UNLOCK();
    }
    else {
      FUN_100061d2(0x13);
    }
  }
  return uVar7;
}


/*
 * FUN_1000b3f0 at 1000b3f0
 * undefined4 __cdecl FUN_1000b3f0(byte * param_1, char * param_2, void * param_3)
 * Address ranges: 1000b3f0-1000b4f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000b3f0(byte *param_1,char *param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  void *this;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  
  iVar2 = _DAT_101f572c;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_100e3c74 == 0) {
      do {
        bVar3 = *param_1;
        cVar1 = *param_2;
        uVar4 = CONCAT11(bVar3,cVar1);
        if (bVar3 == 0) break;
        uVar4 = CONCAT11(bVar3,cVar1);
        uVar7 = (uint)uVar4;
        if (cVar1 == '\0') break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar7 = (uint)CONCAT11(bVar3 + 0x20,cVar1);
        }
        uVar4 = (ushort)uVar7;
        bVar3 = (byte)uVar7;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar4 = (ushort)CONCAT31((int3)(uVar7 >> 8),bVar3 + 0x20);
        }
        bVar3 = (byte)(uVar4 >> 8);
        bVar8 = bVar3 < (byte)uVar4;
        if (bVar3 != (byte)uVar4) goto LAB_1000b44f;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1000b44f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_101f572c = _DAT_101f572c + 1;
      UNLOCK();
      bVar8 = 0 < DAT_101f5728;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_101f572c = iVar2;
        FUN_10006171(0x13);
      }
      uVar9 = (uint)bVar8;
      uVar5 = 0;
      uVar7 = 0;
      do {
        uVar5 = CONCAT31((int3)(uVar5 >> 8),*param_1);
        uVar7 = CONCAT31((int3)(uVar7 >> 8),*param_2);
        if ((uVar5 == 0) || (uVar7 == 0)) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        uVar7 = FUN_1000916f(param_3,uVar7);
        uVar5 = FUN_1000916f(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_1000b4c5;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_1000b4c5:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_101f572c = _DAT_101f572c + -1;
        UNLOCK();
      }
      else {
        FUN_100061d2(0x13);
      }
    }
  }
  return uVar6;
}


/*
 * KERNEL32.DLL::RtlUnwind at 1000b534
 * void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
 * Address ranges: 1000b534-1000b539
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::RtlUnwind
 */


void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x1000b534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}


