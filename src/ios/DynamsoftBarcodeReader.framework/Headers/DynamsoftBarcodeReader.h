#import <UIKit/UIKit.h>


static NSString* _Nonnull const DBRErrorDomain = @"com.dynamsoft.barcodereader.error";
/**
 * @defgroup IOSAPI iOS APIs
 * @{
 */


/**
 * @defgroup Enum Enumerations
 * @{
 */

/**
 * Describes the error codes. 
 * @enum EnumErrorCode
 */
typedef NS_ENUM(NSInteger, EnumErrorCode) 
{
	/** Successful. */
	EnumErrorCode_OK                         = 0,
    
    /** Unknown error. */
    EnumErrorCode_Unknown                    = -10000,
	
	/** Not enough memory to perform the operation. */
    EnumErrorCode_No_Memory                  = -10001,
	
    /** Null pointer. */
    EnumErrorCode_Null_Pointer               = -10002,
	
	/** The license is invalid. */
    EnumErrorCode_License_Invalid            = -10003,
	
    /** The license has expired. */
    EnumErrorCode_License_Expired            = -10004,
	
    /** The file is not found. */
    EnumErrorCode_File_Not_Found             = -10005,
	
    /** The file type is not supported. */
    EnumErrorCode_Filetype_Not_Supported     = -10006,
	
	/** The BPP (bits per pixel) is not supported. */
    EnumErrorCode_BPP_Not_Supported          = -10007,
	
    /** The index is invalid. */
    EnumErrorCode_Index_Invalid              = -10008,
	
	/** The barcode format is invalid. */
    EnumErrorCode_Barcode_Format_Invalid     = -10009,
	
	/** The input region value parameter is invalid. */
    EnumErrorCode_Custom_Region_Invalid      = -10010,
	
    /** The maximum barcode number is invalid. */
    EnumErrorCode_Max_Barcode_Number_Invalid = -10011,
	
	/** Failed to read the image. */
    EnumErrorCode_Image_Read_Failed          = -10012,

	/** Failed to read the TIFF image. */
    EnumErrorCode_TIFF_Read_Failed           = -10013,

	/** The QR Code license is invalid. */
    EnumErrorCode_QR_License_Invalid         = -10016,

	/** The 1D Barcode license is invalid. */
    EnumErrorCode_1D_License_Invalid         = -10017,

	/** The DIB (device-independent bitmaps) buffer is invalid. */
    EnumErrorCode_DIB_Buffer_Invalid         = -10018,

	/** The PDF417 license is invalid. */
    EnumErrorCode_PDF417_License_Invalid     = -10019,

	/** The DATAMATRIX license is invalid. */
    EnumErrorCode_Datamatrix_License_Invalid = -10020,
	
	/** Failed to read the PDF file. */
    EnumErrorCode_PDF_Read_Failed            = -10021,

	/** The PDF DLL is missing. */
    EnumErrorCode_PDF_DLL_Missing            = -10022,

	/** The page number is invalid. */
    EnumErrorCode_Page_Number_Invalid        = -10023,

	/** The custom size is invalid. */
    EnumErrorCode_Custom_Size_Invalid        = -10024,

	/** The custom module size is invalid. */
    EnumErrorCode_Custom_Modulesize_Invalid  = -10025,

	/** Recognition time out. */
    EnumErrorCode_Recognition_Timeout        = -10026,

	/** Failed to parse the JSON string. */
    EnumErrorCode_Json_Parse_Failed          = -10030,

	/** The value type is invalid. */
    EnumErrorCode_Json_Type_Invalid          = -10031,

	/** The key is invalid. */
    EnumErrorCode_Json_Key_Invalid           = -10032,

	/** The value is invalid or out of range. */
    EnumErrorCode_Json_Value_Invalid         = -10033,

	/** The mandatory key "Name" is missing. */
    EnumErrorCode_Json_Name_Key_Missing      = -10034,

	/** The value of the key "Name" is duplicated. */
    EnumErrorCode_Json_Name_Value_Duplicated = -10035,

	/** The template name is invalid. */
    EnumErrorCode_Template_Name_Invalid      = -10036,

	/** The name reference is invalid. */
    EnumErrorCode_Json_Name_Reference_Invalid = -10037,

	/**The parameter value is invalid or out of range. */
    EnumErrorCode_Parameter_Value_Invalid    = -10038,

	/**The domain of your current site does not match the domain bound to the current product key. */
    EnumErrorCode_Domain_Not_Matched         = -10039,

	/**The reserved info does not match the reserved info bound to the current product key. */
    EnumErrorCode_ReservedInfo_Not_Matched   = -10040,

	/** The AZTEC license is invalid. */
    EnumErrorCode_AZTEC_License_Invalid      = -10041,

    /** The license DLL is missing. */    
    EnumErrorCode_License_Dll_Missing        = -10042,

    /** The license key does not match the license file. */    
    EnumErrorCode_Licensekey_Not_Matched     = -10043,

    /** Failed to request the license file. */    
    EnumErrorCode_Requested_Failed           = -10044,

    /** Failed to init the license. */    
    EnumErrorCode_License_Init_Failed        = -10045,
    
    /**The Patchcode license is invalid. */
    EnumErrorCode_Patchcode_License_Invalid   = -10046,

	/**The Postal code license is invalid. */
    EnumErrorCode_Postalcode_License_Invalid    = -10047,

	/**The DPM license is invalid. */
    EnumErrorCode_DPM_License_Invalid   = -10048,

	/**The frame decoding thread already exists. */
    EnumErrorCode_Frame_Decoding_Thread_Exists   = -10049,

	/**Failed to stop the frame decoding thread. */
    EnumErrorCode_Stop_Decoding_Thread_Failed   = -10050,

	/**Failed to set mode's argument. */
    EnumErrorCode_Set_Mode_Argument_Error       = -10051,

	/**The license content is invalid. */
    EnumErrorCode_License_Content_Invalid       = -10052,

	/**The license key is invalid. */
    EnumErrorCode_License_Key_Invalid           = -10053,

	/**The device number in the license key runs out. */
    EnumErrorCode_License_Device_Runs_Out       = -10054,
    
    /**Failed to get mode's argument. */
    EnumErrorCode_GET_MODE_ARGUMENT_ERROR       = -10055,
    
    /**The Intermediate Result Types license is invalid. */
    EnumErrorCode_IRT_LICENSE_INVALID           = -10056,
    
    /**The Maxicode license is invalid. */
    EnumErrorCode_MAXICODE_LICENSE_INVALID      = -10057,
    
    /**The GS1 Databar license is invalid. */
    EnumErrorCode_GS1_DATABAR_LICENSE_INVALID    = -10058,
    
    /**The GS1 Composite code license is invalid. */
    EnumErrorCode_GS1_COMPOSITE_LICENSE_INVALID  = -10059
};

/**
 * Describes the error codes.
 * @enum DLSErrorCode
 */
typedef NS_ENUM(NSInteger, DLSErrorCode) 
{
    
    /**Common Error from Dynamsoft license server. */
    DLSErrorCode_CommonError                = -20000
    
};

/**
 * Describes the extension barcode types.
 * @enum EnumExtendedBarcodeFormat
 */
typedef NS_OPTIONS(NSInteger , EnumExtendedBarcodeFormat)
{
    /** No extended barcode format */
    EnumExtendedBarcodeFormatNULL                   = 0x00,
    
    /** Nonstandard barcode */
    EnumExtendedBarcodeFormatNONSTANDARDBARCODE     = 0x01
};

/**
 * Describes the type of the barcode. All the formats can be combined, such as BF_CODE_39 | BF_CODE_128.
 * @enum EnumBarcodeFormat
 */
typedef NS_OPTIONS(NSInteger , EnumBarcodeFormat)
{

    /** No barcode format */
    EnumBarcodeFormatNULL                = 0x0,
    
	/** Code 39 */
    EnumBarcodeFormatCODE39     		 = 0x1,
	
	/** Code 128 */
    EnumBarcodeFormatCODE128    		 = 0x2,

	/** Code 93 */
    EnumBarcodeFormatCODE93     		 = 0x4,

	/** Codabar */
    EnumBarcodeFormatCODABAR    		 = 0x8,

	/** ITF */
    EnumBarcodeFormatITF        		 = 0x10,

	/** EAN-13 */
    EnumBarcodeFormatEAN13      		 = 0x20,

	/** EAN-8 */
    EnumBarcodeFormatEAN8       		 = 0x40,

	/** UPC-A */
    EnumBarcodeFormatUPCA       		 = 0x80,

	/** UPC-E */
    EnumBarcodeFormatUPCE       		 = 0x100,

	/** Industrial 2 of 5 */
    EnumBarcodeFormatINDUSTRIAL 		 = 0x200,

    /** CODE39 Extended */
    EnumBarcodeFormatCODE39EXTENDED 	 = 0x400,

    /**DataBar Omnidirectional*/
    EnumBarcodeFormatGS1DATABAROMNIDIRECTIONAL     = 0x800,
    
    /**DataBar Truncated*/
    EnumBarcodeFormatGS1DATABARTRUNCATED           = 0x1000,
    
    /**DataBar Stacked*/
    EnumBarcodeFormatGS1DATABARSTACKED             = 0x2000,
    
    /**DataBar Stacked Omnidirectional*/
    EnumBarcodeFormatGS1DATABARSTACKEDOMNIDIRECTIONAL = 0x4000,
    
    /**DataBar Expanded*/
    EnumBarcodeFormatGS1DATABAREXPANDED            = 0x8000,
    
    /**DataBar Expaned Stacked*/
    EnumBarcodeFormatGS1DATABAREXPANDEDSTACKED     = 0x10000,
    
    /**DataBar Limited*/
    EnumBarcodeFormatGS1DATABARLIMITED             = 0x20000,
    
    /** Patch code. */
    EnumBarcodeFormatPATCHCODE           = 0x00040000,
    
    /**USPS Intelligent Mail. Not supported yet. */
    EnumBarcodeFormatUSPSINTELLIGENTMAIL = 0x00100000,
    
    /**Postnet. Not supported yet. */
    EnumBarcodeFormatPOSTNET             = 0x00200000,
    
    /**Planet. Not supported yet. */
    EnumBarcodeFormatPLANET              = 0x00400000,
    
    /**Australian Post. Not supported yet. */
    EnumBarcodeFormatAUSTRALIANPOST      = 0x00800000,
    
    /**UK Royal Mail. Not supported yet. */
    EnumBarcodeFormatUKROYALMAIL         = 0x01000000,
    
	/** PDF417 */
    EnumBarcodeFormatPDF417     		 = 0x02000000,

	/** QRCode */
    EnumBarcodeFormatQRCODE     		 = 0x04000000,

	/** DataMatrix */
    EnumBarcodeFormatDATAMATRIX 		 = 0x08000000,

	/** AZTEC */
    EnumBarcodeFormatAZTEC       		 = 0x10000000,
    
    /**MAXICODE */
    EnumBarcodeFormatMAXICODE            = 0x20000000,
    
    /**Micro QR Code*/
    EnumBarcodeFormatMICROQR             = 0x40000000,

    /**Micro PDF417*/
    EnumBarcodeFormatMICROPDF417         = 0x00080000,
    
    /**GS1 Composite Code*/
    EnumBarcodeFormatGS1COMPOSITE        = -2147483648,
    
    /** Combined value of BF_USPSINTELLIGENTMAIL, BF_POSTNET, BF_PLANET, BF_AUSTRALIANPOST, BF_UKROYALMAIL. Not supported yet. */
    EnumBarcodeFormatPOSTALCODE          = 0x01F00000,

    /** Combined value of BF_CODABAR, BF_CODE_128, BF_CODE_39, BF_CODE_39_Extended, BF_CODE_93, BF_EAN_13, BF_EAN_8, INDUSTRIAL_25, BF_ITF, BF_UPC_A, BF_UPC_E */
    EnumBarcodeFormatONED                = 0x000007FF,
    
    /** Combined value of BF_GS1_DATABAR_OMNIDIRECTIONAL, BF_GS1_DATABAR_TRUNCATED, BF_GS1_DATABAR_STACKED, BF_GS1_DATABAR_STACKED_OMNIDIRECTIONAL, BF_GS1_DATABAR_EXPANDED, BF_GS1_DATABAR_EXPANDED_STACKED, BF_GS1_DATABAR_LIMITED */
    EnumBarcodeFormatGS1DATABAR          = 0x0003F800,
    
	/** All supported formats */
    EnumBarcodeFormatALL                 = -32505857

};

/** 
* Describes the image pixel format. 
* @enum EnumImagePixelFormat
*/
typedef NS_ENUM(NSInteger, EnumImagePixelFormat) 
{

	/** 0:black, 1:white */
    EnumImagePixelFormatBinary         = 0,

	/** 0:white, 1:black */
    EnumImagePixelFormatBinaryInverted = 1,

	/** 8-bit gray */
    EnumImagePixelFormatGrayScaled     = 2,

	/** NV21 */
    EnumImagePixelFormatNV21 		   = 3,

	/** 16bit */
    EnumImagePixelFormatRGB_565 	   = 4,

	/** 16bit */
    EnumImagePixelFormatRGB_555 	   = 5,

	/** 24bit */
    EnumImagePixelFormatRGB_888 	   = 6,

	/** 32bit */
    EnumImagePixelFormatARGB_8888      = 7,

    /** 48bit */
    EnumImagePixelFormatRGB_161616     = 8,

    /** 64bit */
    EnumImagePixelFormatARGB_16161616  = 9

};

/**
* Describes the type of the barcode.
* @enum EnumBarcodeComplementMode
*/
typedef NS_ENUM(NSInteger, EnumBarcodeComplementMode)
{
	/** Not supported yet.*/
	EnumBarcodeComplementModeAuto 	 = 0x01,

	/** Complements the barcode using the general algorithm.*/
	EnumBarcodeComplementModeGeneral = 0x02,

	/**Skips the barcode complement. */
	EnumBarcodeComplementModeSkip 	 = 0x00
};

/**
* Describes the barcode colour mode.
* @enum EnumBarcodeColourMode
*/
typedef NS_ENUM(NSInteger, EnumBarcodeColourMode)
{
	/** Dark items on the light background. Check @ref BICM for available argument settings.*/
	EnumBarcodeColourModeDarkOnLight 				= 0x01,

	/** Light items on the dark background. Not supported yet. Check @ref BICM for available argument settings.*/
	EnumBarcodeColourModeLightOnDark 				= 0x02,

	/** Dark items on the dark background. Not supported yet. Check @ref BICM for available argument settings.*/
	EnumBarcodeColourModeDarkOnDark 				= 0x04,

	/** Light items on the light background. Not supported yet. Check @ref BICM for available argument settings.*/
	EnumBarcodeColourModeLightOnLight 				= 0x08,

	/** The background is mixed by dark and light. Not supported yet. Check @ref BICM for available argument settings.*/
	EnumBarcodeColourModeDarkLightMixed 			= 0x10,

	/** Dark on light items on the dark background. Check @ref BICM for available argument settings.*/
	EnumBarcodeColourModeDarkOnLightDarkSurrounding = 0x20,

	/** Skips the barcode colour operation.  */
	EnumBarcodeColourModeSkip 						= 0x00
};

/**
* Describes the binarization mode.
* @enum EnumBinarizationMode
*/
typedef NS_ENUM(NSInteger, EnumBinarizationMode)
{
	/** Not supported yet. */
	EnumBinarizationModeAuto 	   = 0x01,

	/** Binarizes the image based on the local block. Check @ref BM for available argument settings.*/
	EnumBinarizationModeLocalBlock = 0x02,

	/** Skips binarization. */
	EnumBinarizationModeSkip       = 0x00
};

/**
* Describes the colour clustering mode.
* @enum EnumColourClusteringMode
*/
typedef NS_ENUM(NSInteger, EnumColourClusteringMode)
{
	/** Not supported yet. */
	EnumColourClusteringModeAuto 	   = 0x01,

	/** Clusters colours using the general algorithm based on HSV. Check @ref CCM for available argument settings.*/
	EnumColourClusteringModeGeneralHSV = 0x02,

	/** Skips colour clustering. */
	EnumColourClusteringModeSkip 	   = 0x00
};

/**
* Describes the colour conversion mode.	
* @enum EnumColourConversionMode
*/
typedef NS_ENUM(NSInteger, EnumColourConversionMode)
{
	/** Converts a colour image to a grayscale image using the general algorithm. Check @ref CICM for available argument settings.*/
	EnumColourConversionModeGeneral = 0x01,

	/** Skips colour conversion. */
	EnumColourConversionModeSkip 	= 0x00
};

/**
* Describes the DPM code reading mode.
* @enum EnumDPMCodeReadingMode
*/
typedef NS_ENUM(NSInteger, EnumDPMCodeReadingMode)
{
	/** Not supported yet. */
	EnumDPMCodeReadingModeAuto    = 0x01,

	/** Reads DPM code using the general algorithm. */
	EnumDPMCodeReadingModeGeneral = 0x02,

	/** Skips the DPM code reading. */
	EnumDPMCodeReadingModeSkip    = 0x00
};

/**
* Describes the conflict mode.
* @enum EnumConflictMode
*/
typedef NS_ENUM(NSInteger, EnumConflictMode)
{
	/** Ignores new settings and inherits from previous settings. */
	EnumConflictModeIgnore    = 1,

	/** Overwrites and replaces with new settings. */
	EnumConflictModeOverwrite = 2
};

/**
* Describes the image preprocessing mode.
* @enum EnumImagePreprocessingMode
*/
typedef NS_ENUM(NSInteger, EnumImagePreprocessingMode)
{
	/** Not supported yet. */
	EnumImagePreprocessingModeAuto   	    = 0x01,

	/** Take the unpreprocessed image as the preprocessed result for further reference. */
	EnumImagePreprocessingModeGeneral 	    = 0x02,

	/** Preprocesses the image using the gray equalization algorithm. Check @ref IPM for available argument settings.*/
	EnumImagePreprocessingModeGrayEqualize  = 0x04,

	/** Preprocesses the image using the gray smoothing algorithm. Check @ref IPM for available argument settings.*/
	EnumImagePreprocessingModeGraySmooth    = 0x08,

	/** Preprocesses the image using the sharpening and smoothing algorithm. Check @ref IPM for available argument settings.*/
	EnumImagePreprocessingModeSharpenSmooth = 0x10,

	/** Skips image preprocessing */
	EnumImagePreprocessingModeSkip 			= 0x00
};

/**
* Describes the intermediate result type.
* @enum EnumIntermediateResultType
*/
typedef NS_ENUM(NSInteger, EnumIntermediateResultType)
{
	/** No intermediate result */
	EnumIntermediateResultTypeNoResult 					    = 0x00,

	/** Original image */
	EnumIntermediateResultTypeOriginalImage 			    = 0x01,

	/** Colour clustered image. Not supported yet. */
	EnumIntermediateResultTypeColourClusteredImage 		    = 0x02,

	/** Colour converted grayscale image */
	EnumIntermediateResultTypeColourConvertedGrayScaleImage = 0x04,

	/** Transformed grayscale image */
	EnumIntermediateResultTypeTransformedGrayScaleImage 	= 0x08,

	/** Predetected region */
	EnumIntermediateResultTypePredetectedRegion 			= 0x10,

	/** Preprocessed image */
	EnumIntermediateResultTypePreprocessedImage 			= 0x20,

	/** Binarized image */
	EnumIntermediateResultTypeBinarizedImage 				= 0x40,

	/** Text zone */
	EnumIntermediateResultTypeTextZone 						= 0x80,

	/** Contour */
	EnumIntermediateResultTypeContour 						= 0x100,

	/** Line segment */
	EnumIntermediateResultTypeLineSegment 					= 0x200,

	/** Form. Not supported yet. */
	EnumIntermediateResultTypeForm 							= 0x400,

	/** Segmentation block. Not supported yet. */
	EnumIntermediateResultTypeSegmentationBlock 			= 0x800,

	/** Typed barcode zone */
	EnumIntermediateResultTypeTypedBarcodeZone 				= 0x1000
};

/**
* Describes the localization mode.
* @enum EnumLocalizationMode
*/
typedef NS_ENUM(NSInteger, EnumLocalizationMode)
{
	/** Not supported yet. */
	EnumLocalizationModeAuto = 0x01,

	/** Localizes barcodes by searching for connected blocks. This algorithm usually gives best result and it is recommended to set ConnectedBlocks to the highest priority. */
	EnumLocalizationModeConnectedBlocks = 0x02,

	/** Localizes barcodes by groups of contiguous black-white regions. This is optimized for QRCode and DataMatrix. */
	EnumLocalizationModeStatistics = 0x04,

	/** Localizes barcodes by searching for groups of lines. This is optimized for 1D and PDF417 barcodes.  */
	EnumLocalizationModeLines = 0x08,

	/** Localizes barcodes quickly. This mode is recommended for interactive scenarios. Check @ref LM for available argument settings.*/
	EnumLocalizationModeScanDirectly = 0x10,

    /** Localizes barcodes by groups of marks.This is optimized for DPM codes. */
    EnumLocalizationModeStatisticsMarks = 0x20,
    
	/** Skips the localization. */
	EnumLocalizationModeSkip = 0x00
};

/**
* Describes the QR Code error correction level.
* @enum EnumQRCodeErrorCorrectionLevel
*/
typedef NS_ENUM(NSInteger, EnumQRCodeErrorCorrectionLevel)
{
	/** Error Correction Level H (high) */	
	EnumQRCodeErrorCorrectionLevelErrorCorrectionH = 0,
	
	/** Error Correction Level L (low) */
	EnumQRCodeErrorCorrectionLevelErrorCorrectionL = 1,

	/** Error Correction Level M (medium-low) */
	EnumQRCodeErrorCorrectionLevelErrorCorrectionM = 2,

	/** Error Correction Level Q (medium-high) */
	EnumQRCodeErrorCorrectionLevelErrorCorrectionQ = 3
};

/**
* Describes the region predetection mode.
* @enum EnumRegionPredetectionMode
*/
typedef NS_ENUM(NSInteger, EnumRegionPredetectionMode)
{
	/** The library will automatically choose the algorithm to detect region. */
	EnumRegionPredetectionModeAuto 					= 0x01,

	/** Takes the whole image as a region. */
	EnumRegionPredetectionModeGeneral 				= 0x02,

	/** Detects region using the general algorithm based on RGB colour contrast. Check @ref RPM for available argument settings.*/
	EnumRegionPredetectionModeGeneralRGBContrast 	= 0x04,

	/** Detects region using the general algorithm based on gray contrast. Check @ref RPM for available argument settings.*/
	EnumRegionPredetectionModeGeneralGrayContrast 	= 0x08,

	/** Detects region using the general algorithm based on HSV colour contrast. Check @ref RPM for available argument settings.*/
	EnumRegionPredetectionModeGeneralHSVContrast 	= 0x10,

	/** Skips region detection. */
	EnumRegionPredetectionModeSkip 					= 0x00
};

/**
* Describes the deformation resisting mode.	
* @enum EnumDeformationResistingMode
*/
typedef NS_ENUM(NSInteger, EnumDeformationResistingMode)
{
	/** Not supported yet. */
	EnumDeformationResistingModeAuto 	= 0x01,

	/** Resists deformation using the general algorithm. Check @ref DRM for available argument settings.*/
	EnumDeformationResistingModeGeneral = 0x02,

	/** Skips the deformation resisting operation. */
	EnumDeformationResistingModeSkip 	= 0x00
};

/**
* Describes the extended result type. 
* @enum EnumResultType
*/
typedef NS_ENUM(NSInteger, EnumResultType) 
{
	/** Specifies the standard text. This means the barcode value. */
    EnumResultTypeStandardText 	= 0,

	/** Specifies the raw text. This means the text that includes start/stop characters, check digits, etc. */
    EnumResultTypeRawText 		= 1,

	/** Specifies all the candidate text. This means all the standard text results decoded from the barcode. */
    EnumResultTypeCandidateText = 2,

	/** Specifies the partial text. This means part of the text result decoded from the barcode. */
    EnumResultTypePartialText 	= 3
};

/**
* Describes the terminate phase. 
* @enum EnumTerminatePhase
*/
typedef NS_ENUM(NSInteger, EnumTerminatePhase) 
{
	/** Exits the barcode reading algorithm after the region predetection is done. */
    EnumTerminatePhasePredetected 	 = 0x01,

	/** Exits the barcode reading algorithm after the region predetection and image pre-processing is done. */
    EnumTerminatePhasePreprocecessed = 0x02,

	/** Exits the barcode reading algorithm after the region predetection, image pre-processing, and image binarization are done. */
    EnumTerminatePhaseBinarized 	 = 0x04,

	/** Exits the barcode reading algorithm after the region predetection, image pre-processing, image binarization, and barcode localization are done. */
    EnumTerminatePhasesLocalized  	 = 0x08,

	/** Exits the barcode reading algorithm after the region predetection, image pre-processing, image binarization, barcode localization, and barcode type determining are done. */
    EnumTerminatePhaseDetermined 	 = 0x10,

	/** Exits the barcode reading algorithm after the region predetection, image pre-processing, image binarization, barcode localization, barcode type determining, and barcode recognition are done. */
    EnumTerminatePhaseRecognized 	 = 0x20
};

/**
* Describes the text assisted correction mode.
* @enum EnumTextAssistedCorrectionMode
*/
typedef NS_ENUM(NSInteger, EnumTextAssistedCorrectionMode)
{
	/** Not supported yet. */
	EnumTextAssistedCorrectionModeAuto 				= 0x01,

	/** The accompanying text will be used to verify the decoded barcode result. Check @ref TACM for available argument settings.*/
	EnumTextAssistedCorrectionModeVerifying 		= 0x02,

	/** The accompanying text will be used to verify and patch the decoded barcode result. Check @ref TACM for available argument settings.*/
	EnumTextAssistedCorrectionModeVerifyingPatching = 0x04,

	/** Skips text assisted correction. */
	EnumTextAssistedCorrectionModeSkip 				= 0x00
};

/**
* Describes the text filter mode. 
* @enum EnumTextFilterMode
*/
typedef NS_ENUM(NSInteger, EnumTextFilterMode)
{
	/** Not supported yet. */
	EnumTextFilterModeAuto 			 = 0x01,

	/** Filters text using the general algorithm based on contour. Check @ref TFM for available argument settings.*/
	EnumTextFilterModeGeneralContour = 0x02,

	/** Skips text filtering. */
	EnumTextFilterModeSkip 			 = 0x00
};

/**
* Describes the order mode of text result.
* @enum EnumTextResultOrderMode
*/
typedef NS_ENUM(NSInteger, EnumTextResultOrderMode)
{
	/** Returns the text results in descending order by confidence. */
	EnumTextResultOrderModeConfidence = 0x01,

	/** Returns the text results in position order, from top to bottom, then left to right */
	EnumTextResultOrderModePosition   = 0x02,

	/** Returns the text results in alphabetical and numerical order by barcode format string. */
	EnumTextResultOrderModeFormat     = 0x04,

	/** Skips the ordering operation. */
	EnumTextResultOrderModeSkip       = 0x00
};

/**
* Describes the texture detection mode.
* @enum EnumTextureDetectionMode
*/
typedef NS_ENUM(NSInteger, EnumTextureDetectionMode)
{
	/** Not supported yet. */
	EnumTextureDetectionModeAuto = 0X01,

	/** Detects texture using the general algorithm. Check @ref TDM for available argument settings.*/
	EnumTextureDetectionModeGeneralWidthConcentration = 0X02,

	/** Skips texture detection. */
	EnumTextureDetectionModeSkip = 0x00
};

/**
* Describes the grayscale transformation mode.
* @enum EnumGrayscaleTransformationMode
*/
typedef NS_ENUM(NSInteger, EnumGrayscaleTransformationMode)
{
	/** Transforms to the inverted grayscale for further reference. This value is recommended for light on dark images. */
	EnumGrayscaleTransformationModeInverted = 0x01,
	
	/** Keeps the original grayscale for further reference. This value is recommended for dark on light images. */
	EnumGrayscaleTransformationModeOriginal = 0x02,

	/** Skips grayscale transformation. */
	EnumGrayscaleTransformationModeSkip 	= 0x00
};

/**
* Describes the result coordinate type.
* @enum EnumResultCoordinateType
*/
typedef NS_ENUM(NSInteger, EnumResultCoordinateType)
{
	/** Returns the coordinate in pixel value. */
	EnumResultCoordinateTypePixel 	   = 0x01,

	/** Returns the coordinate as a percentage. */
	EnumResultCoordinateTypePercentage = 0x02
};

/**
* Describes the intermediate result data type.
* @enum EnumIMResultDataType
*/
typedef NS_ENUM(NSInteger,EnumIMResultDataType)
{
	/**Specifies the ImageData */
	EnumIMResultDataTypeImage 				= 0x01,

	/**Specifies the Contour */
	EnumIMResultDataTypeContour 			= 0x02,
	
	/**Specifies the LineSegment */
	EnumIMResultDataTypeLineSegment 		= 0x04,

	/**Specifies the LocalizationResult */
    EnumIMResultDataTypeLocalizationResult 	= 0x08,
	
	/**Specifies the RegionOfInterest */
	EnumIMResultDataTypeRegionOfInterest 	= 0x10
};

/**
 * Describes the saving mode of intermediate result.
 * @enum EnumIntermediateResultSavingMode
 */
typedef NS_ENUM(NSInteger,EnumIntermediateResultSavingMode)
{
    /**Saves intermediate results in memory.*/
    EnumIntermediateResultSavingModeMemory      = 0x01,
    
    /**Saves intermediate results in file system. Check @ref IRSM for available argument settings.*/
    EnumIntermediateResultSavingModeFileSystem  = 0x02,
    
    /**Saves intermediate results both in memory and file system. Check @ref IRSM for available argument settings.*/
    EnumIntermediateResultSavingModeBoth        = 0x04
    
};

/**
 * @} defgroup Enum Enumerations
 */


/*--------------------------------------------------------------------*/

/**
 * @defgroup IOSInterface Class 
 * @{
*/	 

/**
 * Stores FurtherModes.
 */
@interface iFurtherModes : NSObject

/** Sets the mode and priority for colour categorization. Not supported yet.
*
* @par Value range:
* 	    Each array item can be anyone of the ColourClusteringMode Enumeration items.
* @par Default value:
* 	    [CCM_SKIP, CCM_SKIP, CCM_SKIP, CCM_SKIP, CCM_SKIP, CCM_SKIP, CCM_SKIP, CCM_SKIP]
* @par Remarks:
*     The array index represents the priority of the item. A lower index means a higher priority.
* @sa EnumColourClusteringMode
*/
@property (nonatomic, readwrite, nullable) NSArray* colourClusteringModes;

/** Sets the mode and priority for converting a colour image to grayscale.
*
* @par Value range:
* 	    Each array item can be anyone of the ColourConversionMode Enumeration items.
* @par Default value:
* 	    [CICM_GENERAL, CICM_SKIP, CICM_SKIP, CICM_SKIP, CICM_SKIP, CICM_SKIP, CICM_SKIP, CICM_SKIP]
* @par Remarks:
*     The array index represents the priority of the item. A lower index means a higher priority.
* @sa EnumColourConversionMode
*/
@property (nonatomic, readwrite, nullable) NSArray* colourConversionModes;

/** Sets the mode and priority for the grayscale image conversion.
*
* @par Value range:
* 	    Each array item can be anyone of the GrayscaleTransformationMode Enumeration items
* @par Default value:
* 	    [GTM_ORIGINAL, GTM_SKIP, GTM_SKIP, GTM_SKIP, GTM_SKIP, GTM_SKIP, GTM_SKIP, GTM_SKIP]
* @par Remarks:
*     The array index represents the priority of the item. A lower index means a higher priority.
* @sa EnumGrayscaleTransformationMode
*/
@property (nonatomic, readwrite, nullable) NSArray* grayscaleTransformationModes;

/** Sets the region pre-detection mode for barcode searching.
*
* @par Value range:
* 	    Each array item can be anyone of the RegionPredetectionMode Enumeration items
* @par Default value:
* 	    [RPM_GENERAL, RPM_SKIP, RPM_SKIP, RPM_SKIP, RPM_SKIP, RPM_SKIP, RPM_SKIP, RPM_SKIP]
* @par Remarks:
*     The array index represents the priority of the item. A lower index means a higher priority.
*     If the image is large and the barcode on the image is very small, it is recommended to enable region predetection to speed up the localization process and recognition accuracy.
* @sa EnumRegionPredetectionMode
*/
@property (nonatomic, readwrite, nullable) NSArray* regionPredetectionModes;

/** Sets the mode and priority for image preprocessing algorithms.
*
* @par Value range:
* 	    Each array item can be anyone of the ImagePreprocessingMode Enumeration items
* @par Default value:
* 	    [IPM_GENERAL, IPM_SKIP, IPM_SKIP, IPM_SKIP, IPM_SKIP, IPM_SKIP, IPM_SKIP, IPM_SKIP]
* @par Remarks:
*     The array index represents the priority of the item. A lower index means a higher priority.
* @sa EnumImagePreprocessingMode
*/
@property (nonatomic, readwrite, nullable) NSArray* imagePreprocessingModes;

/** Sets the mode and priority for texture detection.
*
* @par Value range:
* 	    Each array item can be any one of the TextureDetectionMode Enumeration items
* @par Default value:
* 	    [TDM_GENERAL_WIDTH_CONCENTRATION, TDM_SKIP, TDM_SKIP, TDM_SKIP, TDM_SKIP, TDM_SKIP, TDM_SKIP, TDM_SKIP]
* @par Remarks:
*     The array index represents the priority of the item. A lower index means a higher priority.
* @sa EnumTextureDetectionMode
*/
@property (nonatomic, readwrite, nullable) NSArray* textureDetectionModes;

/** Sets the mode and priority for text filtering.
*
* @par Value range:
* 	    Each array item can be anyone of the TextFilterMode Enumeration items
* @par Default value:
* 	    [TFM_GENERAL_CONTOUR, TFM_SKIP, TFM_SKIP, TFM_SKIP, TFM_SKIP, TFM_SKIP, TFM_SKIP, TFM_SKIP]
* @par Remarks:
*     The array index represents the priority of the item. A lower index means a higher priority.
*     If an image contains a lot of text, you can enable text filter to speed up the localization process.
* @sa EnumTextFilterMode
*/
@property (nonatomic, readwrite, nullable) NSArray* textFilterModes;

/** Sets the mode of text assisted correction for barcode decoding. Not supported yet.
*
* @par Value range:
* 	    Any one of the TextAssistedCorrectionMode Enumeration items
* @par Default value:
* 	    TACM_VERIFYING
* @sa EnumTextAssistedCorrectionMode
*/
@property (nonatomic, assign) EnumTextAssistedCorrectionMode textAssistedCorrectionMode;

/** Sets the mode and priority for DPM code reading. Not supported yet.
*
* @par Value range:
* 	    Each array item can be anyone of the ColourConversionMode Enumeration items
* @par Default value:
* 	    [DPMCRM_SKIP, DPMCRM_SKIP, DPMCRM_SKIP, DPMCRM_SKIP, DPMCRM_SKIP, DPMCRM_SKIP, DPMCRM_SKIP, DPMCRM_SKIP]
* @par Remarks:
*     The array index represents the priority of the item. A lower index means a higher priority.
* @sa EnumColourConversionMode
*/
@property (nonatomic, readwrite, nullable) NSArray* dpmCodeReadingModes;

/** Sets the mode and priority for deformation resisting. Not supported yet.
*
* @par Value range:
* 	    Each array item can be anyone of the DeformationResistingMode Enumeration items
* @par Default value:
* 	    [DRM_SKIP, DRM_SKIP, DRM_SKIP, DRM_SKIP, DRM_SKIP, DRM_SKIP, DRM_SKIP, DRM_SKIP]
* @par Remarks:
*     The array index represents the priority of the item. A lower index means a higher priority.
* @sa EnumDeformationResistingMode
*/
@property (nonatomic, readwrite, nullable) NSArray* deformationResistingModes;

/** Sets the mode and priority to complement the missing parts in the barcode. Not supported yet.
*
* @par Value range:
* 	    Each array item can be anyone of the BarcodeComplementMode Enumeration items
* @par Default value:
* 	    [BCM_SKIP, BCM_SKIP, BCM_SKIP, BCM_SKIP, BCM_SKIP, BCM_SKIP, BCM_SKIP, BCM_SKIP]
* @par Remarks:
*     The array index represents the priority of the item. A lower index means a higher priority.
* @sa EnumBarcodeComplementMode
*/
@property (nonatomic, readwrite, nullable) NSArray* barcodeComplementModes;

/** Sets the mode and priority for the barcode colour mode used to process the barcode zones.
*
* @par Value range:
* 	    Each array item can be anyone of the BarcodeColourMode Enumeration items
* @par Default value:
* 	    [BICM_DARK_ON_LIGHT, BICM_SKIP, BICM_SKIP, BICM_SKIP, BICM_SKIP, BICM_SKIP, BICM_SKIP, BICM_SKIP]
* @par Remarks:
*     The array index represents the priority of the item. A lower index means a higher priority.
* @sa EnumBarcodeColourMode
*/
@property (nonatomic, readwrite, nullable) NSArray* barcodeColourModes;

@end


/**
*Stores the region info.
*/
@interface iRegionDefinition : NSObject

/** The coordinate or percentage of the topmost region.
*
* @par Value range:
* 	    regionMeasuredByPercentage = 0, [0, 0x7fffffff]
* 	    regionMeasuredByPercentage = 1, [0, 100]
* @par Default value:
* 	    0
*/
@property (nonatomic, assign) NSInteger regionTop;

/** The coordinate or percentage of the leftmost region.
*
* @par Value range:
* 	    regionMeasuredByPercentage = 0, [0, 0x7fffffff]
* 	    regionMeasuredByPercentage = 1, [0, 100]
* @par Default value:
* 	    0
*/
@property (nonatomic, assign) NSInteger regionLeft;

/** The coordinate or percentage of the rightmost region.
*
* @par Value range:
* 	    regionMeasuredByPercentage = 0, [0, 0x7fffffff]
* 	    regionMeasuredByPercentage = 1, [0, 100]
* @par Default value:
* 	    0
*/
@property (nonatomic, assign) NSInteger regionRight;

/** The coordinate or percentage of the bottommost region.
*
* @par Value range:
* 	    regionMeasuredByPercentage = 0, [0, 0x7fffffff]
* 	    regionMeasuredByPercentage = 1, [0, 100]
* @par Default value:
* 	    0
*/
@property (nonatomic, assign) NSInteger regionBottom;

/** Sets whether to use percentages to measure the region size.
*
* @par Value range:
* 	    [0, 1]
* @par Default value:
* 	    0
* @par Remarks:
*     When it's set to 1, the values of Top, Left, Right, Bottom indicate the percentage (from 0 to 100); otherwise, they refer to the coordinates.
*     0: not by percentage
*     1: by percentage
*/
@property (nonatomic, assign) NSInteger regionMeasuredByPercentage;

@end


/**
* Defines a struct to configure the runtime settings for barcode reading.
* These settings are used to control the barcode recognition process such as which barcode types to decode.
*
*/
@interface iPublicRuntimeSettings: NSObject

/** Sets the phase where to stop the decoding algorithm.
*
* @par Value range:
* 	    Anyone of the TerminatePhase Enumeration items
* @par Default value:
* 	    TP_BARCODE_RECOGNIZED
* @par Remarks:
*	    When the recognition result is not desired, this parameter can be set to skip certain processing stages.
* @sa EnumTerminatePhase
*/
@property (nonatomic, assign) EnumTerminatePhase terminatePhase;

/** Sets the maximum amount of time (in milliseconds) for the library to search for barcodes per page. It does not include the time taken to load/decode an image (TIFF, PNG, etc) from disk into memory.
*
* @par Value range:
* 	    [0, 0x7fffffff]
* @par Default value:
* 	    10000
* @par Remarks:
*	    If you want to stop reading barcodes after a specified period of time, you can use this parameter to set a timeout.
*/
@property (nonatomic, assign) NSInteger timeout;

/** Sets the number of threads for the image processing algorithm to decode barcodes.
*
* @par Value range:
* 	    [1, 4]
* @par Default value:
* 	    4
* @par Remarks:
*	    By default, to keep a balance between speed and accuracy, the library concurrently runs four threads for decoding barcodes. 
*/
@property (nonatomic, assign) NSInteger maxAlgorithmThreadCount;

/** Sets the count of barcodes expected to be detected from each image.
*
* @par Value range:
* 	    [0, 0x7fffffff]
* @par Default value:
* 	    0
* @par Remarks:
*	    0: unknown barcode count. The library will try to find at least one barcode.
*	    1: try to find one barcode. If one barcode is found, the library will stop the localization process and perform barcode decoding.
*	    n: try to find n barcodes. If the library only finds m (m<n) barcodes, it will try different algorithms till n barcodes are found or all algorithms are tried.
*/
@property (nonatomic, assign) NSInteger expectedBarcodesCount;

/** Sets the formats of the barcode to be read. Barcode formats can be combined.
*
* @par Value range:
* 	    A combined value of BarcodeFormat Enumeration items
* @par Default value:
* 	    BF_ALL
* @par Remarks:
*	    If the barcode type(s) are certain, specifying the barcode type(s) to be read can speed up the recognition process.
* @sa EnumBarcodeFormat
*/
@property (nonatomic, assign) NSInteger barcodeFormatIds;

/** Sets the formats of the barcode to be read. Barcode formats can be combined.
 *
 * @par Value range:
 *         A combined value of Extended BarcodeFormat Enumeration items
 * @par Default value:
 *         BF_ALL
 * @par Remarks:
 *        If the barcode type(s) are certain, specifying the barcode type(s) to be read will speed up the recognition process.
 * @sa EnumExtendedBarcodeFormat
 */
@property (nonatomic, assign) NSInteger extendedBarcodeFormatIds;

/** Sets the resolution of the output rasterized image of a PDF.
*
* @par Value range:
* 	    [100, 600]
* @par Default value:
* 	    300
* @par Remarks:
*	    When you decode a PDF file using the DecodeFile method, the library converts the PDF file to image(s) first and then perform barcode recognition.
*/
@property (nonatomic, assign) NSInteger pdfRasterDPI;

/** Sets the threshold for image shrinking.
*
* @par Value range:
* 	    [512, 0x7fffffff]
* @par Default value:
* 	    2300
* @par Remarks:
*	    If the shorter edge size is larger than the given value, the library calculates the required height and width of the barcode image and shrinks the image to that size before localization; otherwise, it performs barcode localization on the original image.
*/
@property (nonatomic, assign) NSInteger scaleDownThreshold;

/** Sets the mode and priority for binarization.
*
* @par Value range:
* 	    Each array item can be anyone of the BinarizationMode Enumeration items
* @par Default value:
* 	    [BM_LOCAL_BLOCK, BM_SKIP, BM_SKIP, BM_SKIP, BM_SKIP, BM_SKIP, BM_SKIP, BM_SKIP]
* @par Remarks:
*     The array index represents the priority of the item. A lower index means a higher priority.
* @sa EnumBinarizationMode
*/
@property (nonatomic, readwrite, nullable) NSArray* binarizationModes;

/** Sets the mode and priority for localization algorithms.
*
* @par Value range:
* 	    Each array item can be anyone of the LocalizationMode Enumeration items
* @par Default value:
* 	    [LM_CONNECTED_BLOCKS, LM_SCAN_DIRECTLY, LM_STATISTICS, LM_LINES, LM_SKIP, LM_SKIP, LM_SKIP, LM_SKIP]
* @par Remarks:
*     The array index represents the priority of the item. A lower index means a higher priority.
* @sa EnumLocalizationMode
*/
@property (nonatomic, readwrite, nullable) NSArray* localizationModes;

/**Sets the mode for saving intermediate result.
 *
 * @par Value range:
 *         A value of IntermediateResultSavingMode Enumeration items
 * @par Default value:
 *         IRSM_MEMORY
 * @sa IntermediateResultSavingMode
 */
@property (nonatomic, assign)EnumIntermediateResultSavingMode intermediateResultSavingMode;


/** Sets the further modes.
*
*/
@property (nonatomic, nonnull) iFurtherModes* furtherModes;

/** Sets the degree of blurriness of the barcode.
*
* @par Value range:
* 	    [0, 9]
* @par Default value:
* 	    9
* @par Remarks:
*	    For a blurry image, you may set the property to a larger value. The higher the value set, the more effort the library will spend to decode images. However, this could slow down the recognition process.
*/
@property (nonatomic, assign) NSInteger deblurLevel;

/** Sets which types of intermediate result to be kept for further reference. Intermediate result types can be combined.
*
* @par Value range:
* 	    A combined value of IntermediateResultType Enumeration items
* @par Default value:
* 	    0
* @sa EnumIntermediateResultType
*/
@property (nonatomic, assign) NSInteger intermediateResultTypes;

/** Specifies the format of the coordinates returned.
*
* @par Value range:
* 	    Any one of the ResultCoordinateType Enumeration items
* @par Default value:
* 	    RCT_PIXEL
* @sa EnumResultCoordinateType
*/
@property (nonatomic, assign) EnumResultCoordinateType resultCoordinateType;

/** Sets the mode and priority for the order of the text results returned.
*
* @par Value range:
* 	    Each array item can be anyone of the TextResultOrderMode Enumeration items
* @par Default value:
* 	    [TROM_CONFIDENCE, TROM_POSITION, TROM_FORMAT, TROM_SKIP, TROM_SKIP, TROM_SKIP, TROM_SKIP, TROM_SKIP]
* @par Remarks:
*     The array index represents the priority of the item. A lower index means a higher priority.
* @sa EnumTextResultOrderMode
*/
@property (nonatomic, readwrite, nullable) NSArray* textResultOrderModes;

/** Sets the region definition including regionTop, regionLeft, regionRight, regionBottom and regionMeasuredByPercentage.
*
*/
@property (nonatomic, nonnull) iRegionDefinition* region;

/** Sets the range of barcode text length for barcodes searching.
*
* @par Value range:
* 	    [0, 0x7fffffff]
* @par Default value:
* 	    0
* @par Remarks:
*     0: means no limitation on the length of barcode text.
*/
@property (nonatomic, assign) NSInteger minBarcodeTextLength;

/** The minimum confidence of the result.
*
* @par Value range:
* 	    [0, 100]
* @par Default value:
* 	    0
* @par Remarks:
*     0: means no limitation on the confidence.
*/
@property (nonatomic, assign) NSInteger minResultConfidence;

/* Sets whether or not to return the clarity of the barcode zone.
 * @par Value range:
 *      [0,1]
 * @par Default value:
 *      0
 * @par Remarks:
 *      0 : Do not return the clarity of the barcode zone;
 *      1 : return the clarity of the barcode zone;
 */
@property (nonatomic, assign) NSInteger returnBarcodeZoneClarity;

@end


/**
 * Defines a struct to configure the frame decoding Parameters.
 */
@interface iFrameDecodingParameters : NSObject

/**The max count of frames waiting for decoding.
 *
 * @par Value range:
 *         [0,0x7fffffff]
 * @par Default value:
 *         3
 */
@property (nonatomic, assign) NSInteger maxQueueLength;

/**The max count of frames whose decoding results (text result/localization result) to be kept for further reference.
 *
 * @par Value range:
 *         [0, 0x7fffffff]
 * @par Default value:
 *         10
 */
@property (nonatomic, assign) NSInteger maxResultQueueLength;

/**The width of the frame image in pixels.
 *
 * @par Value range:
 *         [0, 0x7fffffff]
 * @par Default value:
 *         0
 */
@property (nonatomic, assign) NSInteger width;

/**The height of the frame image in pixels.
 *
 * @par Value range:
 *         [0, 0x7fffffff]
 * @par Default value:
 *         0
 */
@property (nonatomic, assign) NSInteger height;

/**The stride (or scan width) of the frame image.
 *
 * @par Value range:
 *         [0,0x7fffffff]
 * @par Default value:
 *         0
 */
@property (nonatomic, assign) NSInteger stride;

/**The image pixel format used in the image byte array.
 *
 * @par Value range:
 *         A value of ImagePixelFormat Enumeration items
 * @par Default value:
 *         IPF_GRAYSCALED
 * @sa ImagePixelFormat
 */
@property (nonatomic, assign) EnumImagePixelFormat imagePixelFormat;

/**The region definition of the frame for calculating the internal indicator.
 *
 * @sa RegionDefinition
 */
@property (nonatomic, nonnull) iRegionDefinition* region;

/**The threshold used for filtering frames.
 *
 * @par Value range:
 *         [0, 1]
 * @par Default value:
 *         0.1
 * @par Remarks:
 *         The library will calculate an inner indicator for each frame coming from AppendFrame. If the change rate of the indicators
 *         between the current frame and the history frames is larger than the given threshold, 
 *         the current frame will not be added to the inner frame queue waiting for decoding.
 */
@property (nonatomic, assign) float threshold;

/**The frequency of calling method AppendFrame per second.
 *
 * @par Value range:
 *         [0,0x7fffffff]
 * @par Default value:
 *         0
 * @par Remarks:
 *          0 means the frequency will be calculated automatically by the library.
 */
@property (nonatomic, assign) NSInteger fps;

@end

/**
 * Stores the sampling image data.
 *
 */
@interface iSamplingImageData : NSObject

/** The sampling image data in a byte array. */
@property (nonatomic, nullable) NSData* bytes;

/** The width of the sampling image. */
@property (nonatomic, assign) NSInteger width;

/** The height of the sampling image. */
@property (nonatomic, assign) NSInteger height;

@end

/**
* Stores the extended result.
*
*/
@interface iExtendedResult: NSObject

/** Extended result type */
@property (nonatomic, assign) EnumResultType resultType;

/** Barcode type */
@property (nonatomic, assign) EnumBarcodeFormat barcodeFormat;

/** Barcode type as string */
@property (nonatomic, nullable) NSString* barcodeFormatString;

/** Extended Barcode type */
@property (nonatomic, assign) EnumExtendedBarcodeFormat extendedBarcodeFormat;

/** Barcode type as string */
@property (nonatomic, nullable) NSString* extendedBarcodeFormatString;

/** The confidence of the result */
@property (nonatomic, assign) NSInteger confidence;

/** The content in a byte array */
@property (nonatomic, nullable) NSData* bytes;

/** The accompanying text content in a byte array */
@property (nonatomic, nullable) NSData* accompanyingTextBytes;

/** The deformation value */
@property (nonatomic, assign) NSInteger deformation;

/** One of the following: @ref iQRCodeDetails, @ref iPDF417Details, @ref iDataMatrixDetails, @ref iAztecDetails, @ref iOneDCodeDetails */
@property (nonatomic, nullable) NSObject* detailedResult;

/** The sampling image info.It is valid when resultType is RT STANDARD TEXT. */
@property (nonatomic, nullable) iSamplingImageData* samplingImage;

/** The clarity of the barcode zone in percentage */
@property (nonatomic, assign) NSInteger clarity;

@end


/**
 * Stores the localization result including the boundary, the angle, the page number, the region name, etc.
 */ 
@interface iLocalizationResult: NSObject

/** The terminate phase of localization result. */
@property (nonatomic, assign) EnumTerminatePhase terminatePhase;

/** Barcode type. */
@property (nonatomic, assign) EnumBarcodeFormat barcodeFormat;

/** Barcode type as string */
@property (nonatomic, nullable) NSString* barcodeFormatString;

/** Extended Barcode type */
@property (nonatomic, assign) EnumExtendedBarcodeFormat extendedBarcodeFormat;

/** Barcode type as string */
@property (nonatomic, nullable) NSString* extendedBarcodeFormatString;

/** The array which stores the coordinates of four result points. */
@property (nonatomic, nullable) NSArray* resultPoints;

/** The angle of a barcode. Values range from 0 to 360. */
@property (nonatomic, assign) NSInteger angle;

/** The barcode module size (the minimum bar width in pixels) */
@property (nonatomic, assign) NSInteger moduleSize;

/** The number of the page where the barcode located. The index is 0-based. */
@property (nonatomic, assign) NSInteger pageNumber;

/** The name of the region where the barcode located. */
@property (nonatomic, nullable) NSString* regionName;

/** The document name. */
@property (nonatomic, nullable) NSString* documentName;

/** The coordinate type.*/
@property (nonatomic, assign) EnumResultCoordinateType resultCoordinateType;

/** The accompanying text content in a byte array */
@property (nonatomic, nullable) NSData* accompanyingTextBytes;

/** The confidence of the localization result*/
@property (nonatomic, assign) NSInteger confidence;

@end


/**
* Stores the text result
*
*/
@interface iTextResult : NSObject

/** The barcode format */
@property (nonatomic, assign) EnumBarcodeFormat barcodeFormat;

/** Barcode format as string */
@property (nonatomic, nullable) NSString* barcodeFormatString;

/** Extended Barcode type */
@property (nonatomic, assign) EnumExtendedBarcodeFormat extendedBarcodeFormat;

/** Barcode type as string */
@property (nonatomic, nullable) NSString* extendedBarcodeFormatString;

/** The barcode text, ends by '\0' */
@property (nonatomic, nullable) NSString* barcodeText;

/** The barcode content in a byte array */
@property (nonatomic, nullable) NSData* barcodeBytes;

/** The corresponding localization result */
@property (nonatomic, nullable) iLocalizationResult* localizationResult;

/** One of the following: @ref iQRCodeDetails, @ref iPDF417Details, @ref iDataMatrixDetails, @ref iAztecDetails, @ref iOneDCodeDetails */
@property (nonatomic, nullable) NSObject* detailedResult;

/** The extended result array */
@property (nonatomic, nullable) NSArray<iExtendedResult*>* extendedResults;

@end


/**
* Stores the OneD code details
*
*/
@interface iOneDCodeDetails : NSObject

/** The barcode module size (the minimum bar width in pixels) */
@property (nonatomic, assign) NSInteger moduleSize;

/** The start chars in a byte array */
@property (nonatomic, nullable) NSData* startCharsBytes;

/** The stop chars in a byte array */
@property (nonatomic, nullable) NSData* stopCharsBytes;

/** The check digit chars in a byte array */
@property (nonatomic, nullable) NSData* checkDigitBytes;

@end


/**
* Stores the QRCode details
*
*/
@interface iQRCodeDetails : NSObject

/** The barcode module size (the minimum bar width in pixels) */
@property (nonatomic, assign) NSInteger moduleSize;

/** The row count of the barcode */
@property (nonatomic, assign) NSInteger rows;

/** The column count of the barcode */
@property (nonatomic, assign) NSInteger columns;

/** The error correction level of the barcode */
@property (nonatomic, assign) EnumQRCodeErrorCorrectionLevel errorCorrectionLevel;

/** The version of the QR Code */
@property (nonatomic, assign) NSInteger version;

/** Number of the models */
@property (nonatomic, assign) NSInteger model;

@end


/**
* Stores the PDF417 details
*
*/
@interface iPDF417Details : NSObject

/** The barcode module size (the minimum bar width in pixels) */
@property (nonatomic, assign) NSInteger moduleSize;

/** The row count of the barcode */
@property (nonatomic, assign) NSInteger rows;

/** The column count of the barcode */
@property (nonatomic, assign) NSInteger columns;

/** The error correction level of the barcode */
@property (nonatomic, assign) NSInteger errorCorrectionLevel;

@end


/**
* Stores the DataMatrix details
*
*/
@interface iDataMatrixDetails : NSObject

/** The barcode module size (the minimum bar width in pixels) */
@property (nonatomic, assign) NSInteger moduleSize;

/** The row count of the barcode */
@property (nonatomic, assign) NSInteger rows;

/** The column count of the barcode */
@property (nonatomic, assign) NSInteger columns;

/** The row count of the barcode data region */
@property (nonatomic, assign) NSInteger dataRegionRows;

/** The column count of the barcode data region */
@property (nonatomic, assign) NSInteger dataRegionColumns;

/** The data region count */
@property (nonatomic, assign) NSInteger dataRegionNumber;

@end


/**
* Stores the Aztec details
*
*/
@interface iAztecDetails : NSObject

/** The barcode module size (the minimum bar width in pixels) */
@property (nonatomic, assign) NSInteger moduleSize;

/** The row count of the barcode */
@property (nonatomic, assign) NSInteger rows;

/** The column count of the barcode */
@property (nonatomic, assign) NSInteger columns;

/** A negative number (-1, -2, -3, -4) specifies a compact Aztec code.
*   A positive number (1, 2, .. 32) specifies a normal (full-range) Aztec code*/
@property (nonatomic, assign) NSInteger layerNumber;

@end


/**
* Stores the intermediate result
*
*/
@interface iIntermediateResult : NSObject

/**The total result count */
@property (nonatomic, assign) NSInteger resultsCount;

/**One of the following types: Array of @ref iContour, Array of @ref iImageData, Array of @ref iLineSegment, Array of @ref iLocalizationResult, Array of @ref iRegionOfInterest */
@property (nonatomic, nullable) NSObject* results;

/** Intermediate data Type */
@property (nonatomic, assign) EnumIMResultDataType dataType;

/** Intermediate result Type */
@property (nonatomic, assign) EnumIntermediateResultType resultType;

/** The BarcodeComplementMode used when generating the current intermediate result */
@property (nonatomic, assign) EnumBarcodeComplementMode barcodeComplementMode;

/** The array index of current used ColourClusteringMode in ColourClusteringModes setting */
@property (nonatomic, assign) NSInteger bcmIndex;

/** The DeformationResistingMode used when generating the current intermediate result */
@property (nonatomic, assign) EnumDeformationResistingMode deformationResistingMode;

/** The array index of current used DeformationResistingMode in DeformationResistingModes setting */
@property (nonatomic, assign) NSInteger drmIndex;

/** The DPMCodeReadingMode used when generating the current intermediate result */
@property (nonatomic, assign) EnumDPMCodeReadingMode dpmCodeReadingMode;

/** The array index of current used DPMCodeReadingMode in DPMCodeReadingModes setting */
@property (nonatomic, assign) NSInteger dpmcrmIndex;

/**The rotation matrix. */
@property (nonatomic, nonnull) NSArray* transformationMatrix;

/** The TextFilterMode used when generating the current intermediate result */
@property (nonatomic, assign) EnumTextFilterMode textFilterMode;

/** The array index of current used TextFilterMode in TextFilterModes setting */
@property (nonatomic, assign) NSInteger tfmIndex;

/** The LocalizationMode used when generating the current intermediate result */
@property (nonatomic, assign) EnumLocalizationMode localizationMode;

/** The array index of current used LocalizationMode in LocalizationModes setting */ 
@property (nonatomic, assign) NSInteger lmIndex;

/** The BinarizationMode used when generating the current intermediate result */
@property (nonatomic, assign) EnumBinarizationMode binarizationMode;

/** The array index of current used BinarizationMode in BinarizationModes setting */
@property (nonatomic, assign) NSInteger bmIndex;

/** The ImagePreprocessingMode used when generating the current intermediate result */
@property (nonatomic, assign) EnumImagePreprocessingMode imagePreprocessingMode;

/** The array index of current used ImagePreprocessingMode in ImagePreprocessingModes setting */
@property (nonatomic, assign) NSInteger ipmIndex;

/** The ID of the region of interest generated by the library */
@property (nonatomic, assign) NSInteger roiId;

/** The RegionPredetectionMode used when generating the current intermediate result */
@property (nonatomic, assign) EnumRegionPredetectionMode regionPredetectionMode;

/** The array index of current used RegionPredetectionMode in RegionPredetectionModes setting */
@property (nonatomic, assign) NSInteger rpmIndex;

/** The GrayscaleTransformationMode used when generating the current intermediate result */
@property (nonatomic, assign) EnumGrayscaleTransformationMode grayscaleTransformationMode;

/** The array index of current used GrayscaleTransformationMode in GrayscaleTransformationModes setting */
@property (nonatomic, assign) NSInteger gtmIndex;

/** The ColourConversionMode used when generating the current intermediate result */
@property (nonatomic, assign) EnumColourConversionMode colourConversionMode;

/** The array index of current used ColourConversionMode in ColourConversionModes setting */
@property (nonatomic, assign) NSInteger cicmIndex;

/** The ColourClusteringMode used when generating the current intermediate result */
@property (nonatomic, assign) EnumColourClusteringMode colourClusteringMode;

/** The array index of current used ColourClusteringMode in ColourClusteringModes setting */
@property (nonatomic, assign) NSInteger ccmIndex;

/** The scaledown ratio */
@property (nonatomic, assign) NSInteger scaleDownRatio;

/** The ID of the operated frame */
@property (nonatomic, assign) NSInteger frameId;

@end


/**
* Stores the contour
*
*/
@interface iContour : NSObject

/** The total points count of the contour */
@property (nonatomic, assign) NSInteger pointsCount;

/** The points array */
@property (nonatomic, nonnull) NSArray* points;

@end


/**
* Stores the image data.
*
*/
@interface iImageData : NSObject

/** The image data content in a byte array */
@property (nonatomic, nonnull) NSData* bytes;

/** The width of the image in pixels */
@property (nonatomic, assign) NSInteger width;

/** The height of the image in pixels */
@property (nonatomic, assign) NSInteger height;

/** The stride (or scan width) of the image  */
@property (nonatomic, assign) NSInteger stride;

/** The image pixel format used in the image byte array */
@property (nonatomic, assign) EnumImagePixelFormat format;

@end


/**
* Stores the line segment.
*
*/
@interface iLineSegment : NSObject

/** The start point of the line segment */
@property (nonatomic, assign) CGPoint startPoint;

/** The end point of the line segment */
@property (nonatomic, assign) CGPoint endPoint;

/** The confidence coefficients for lines.
 *There are 4 coefficients in this set:
 *linesConfidenceCoefficients[0] is average positive amplitude;
 *linesConfidenceCoefficients[1] is max positive amplitude;
 *linesConfidenceCoefficients[2] is average negative amplitude;
 *linesConfidenceCoefficients[3] is max negative amplitude;
 */
@property (nonatomic, nullable) NSData* linesConfidenceCoefficients;

@end


/**
* Stores the region of interest
*
*/
@interface iRegionOfInterest : NSObject

/**The ID generated by the library */
@property (nonatomic, assign) NSInteger roiId;

/**The left top point of the region */
@property (nonatomic, assign) CGPoint point;

/**The width of the region */
@property (nonatomic, assign) NSInteger width;

/**The height of the region */
@property (nonatomic, assign) NSInteger height;

@end


/**
 * Protocol for a delegate to handle callback when text result returned.
 */
@protocol DBRTextResultDelegate <NSObject>

@required
/**
* Represents the method to handle the text result array returned by the library.
*
* @param frameId The ID of the frame.
* @param results Recognized barcode results of the frame.
* @param userData Arguments to pass to your function.
*
* @sa TextResultArray
*
* @par Code Snippet:
* @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     - (void)textResultCallback:(NSInteger)frameId results:(NSArray<iTextResult*>*)results userData: (NSObject*)userData {
        //TODO add your code for using test results
    }
    [barcodeReader startFrameDecoding:2 maxResultQueueLength:10 width:1024 height:720 stride:720 format:EnumImagePixelFormatBinary templateName:@"" error:nil];
* @endcode
*/
- (void)textResultCallback:(NSInteger)frameId results:(NSArray<iTextResult*>* _Nullable)results userData: (NSObject* _Nullable)userData;

@end

/**
 * Protocol for a delegate to handle callback when intermediate result returned.
 */
@protocol DBRIntermediateResultDelegate <NSObject>

@required
/**
 * Represents the method to handle the intermediate result array returned by the library.
 *
 * @param frameId The ID of the frame.
 * @param results The intermediate results of the frame.
 * @param userData Arguments to pass to your function.
 *
 * @sa IntermediateResultArray
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     - (void)intermediateResultCallback:(NSInteger)frameId results:(NSArray<iIntermediateResult*>* _Nullable)results userData: (NSObject* _Nullable)userData {
         //TODO add your code for using intermediate results
     }
     [barcodeReader startFrameDecoding:2 maxResultQueueLength:10 width:1024 height:720 stride:720 format:EnumImagePixelFormatBinary templateName:@"" error:nil];
 * @endcode
 */
- (void)intermediateResultCallback:(NSInteger)frameId results:(NSArray<iIntermediateResult*>* _Nullable)results userData: (NSObject* _Nullable)userData;

@end

/**
 * Protocol for a delegate to handle callback when an error returned.
 */
@protocol DBRErrorDelegate <NSObject>

@required
/**
 * Represents the method to handle the error code returned by the library.
 *
 * @param frameId The ID of the frame.
 * @param errorCode Error Code generated when decoding the frame.
 * @param userData Arguments to pass to your function.
 *
 * @sa ErrorCode
 *
 * @par Code Snippet:
 * @code
     - (void)errorCallback:(NSInteger)frameId errorCode:(NSInteger)errorCode userData:(NSObject* _Nullable)userData
     {
        //TODO add your code for using error results
     }
 * @endcode
 */
- (void)errorCallback:(NSInteger)frameId errorCode:(NSInteger)errorCode userData: (NSObject* _Nullable)userData;

@end

/**
 * Protocol for a delegate to handle callback when license verification message returned.
 */
@protocol DBRServerLicenseVerificationDelegate <NSObject>

@required
/**
 * The callback of license server.
 *
 * @param [in,out] isSuccess Whether the license verification was successful.
 * @param [in,out] error The error message from license server.
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     - (void)licenseVerificationCallback:(bool)isSuccess error:(NSError * _Nullable)error
     {
         //TODO add your code for license verification
     }
 * @endcode
 */
- (void)licenseVerificationCallback:(bool)isSuccess error:(NSError * _Nullable)error;


@end


/**
* Defines a class that provides functions for working with extracting barcode data. 
* 
* Four methods are now supported for editing runtime settings - reset, initialize, append, and update.
* - Reset runtime settings: resets all parameters in runtime settings to default values.
* 
* - Initialize with template: resets runtime settings firstly and replaces all parameters in runtime settings with the values specified in the given template regardless of the current runtime settings.
* 
* - Append template to runtime settings: appends the template and updates runtime settings; the conflicting values will be assigned by the rules in DBRPublicRuntimeSettings.
* 
* - Update with struct: updates the current runtime settings with the values specified in the given struct; the parameters not defined in the struct remain unchanged.
* 
* 
* @par References
* More information about public parameters and template file can be found in DBR_Developer's_Guide.pdf in your installation folder.
* 
* 
* @sa DBRPublicRuntimeSettings
*/

@interface DynamsoftBarcodeReader: NSObject

 /**
  * Stores the license used in DynamsoftBarcodeReader.
  */
@property (nonatomic, nonnull) NSString* license;

/**
 * @name Initiation Functions
 * @{
 */

/**
 * Initializes DynamsoftBarcodeReader.
 *
 * @return The instance of DynamsoftBarcodeReader.
 *
 * @par Remark 
 *		Partial of the decoding result will be masked with "*" without a valid license key.
 *
 * @par Code Snippet:
 * @code
    DynamsoftBarcodeReader *barcodeReader;
    BarcodeReader = [[DynamsoftBarcodeReader alloc] init];
 * @endcode
 */
- (instancetype _Nonnull)init;
 
 /**
  * Initializes DynamsoftBarcodeReader with a license.
  *
  * @param [in] license The license key.
  *
  * @return The instance of DynamsoftBarcodeReader.
  *
  * @par Code Snippet:
  * @code
      DynamsoftBarcodeReader *barcodeReader;
      barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
  * @endcode
  */
- (instancetype _Nonnull)initWithLicense:(NSString* _Nonnull)license;

/**
 * Initializes DynamsoftBarcodeReader with a license and connects to the specified server for online verification.
 * 
 * @param [in] licenseSeServer The name/IP of the license server.		   
 * @param [in] licenseKey The license key.
 * @param [in,out] connectionDelegate The delegate to handle callback when license server returns.
 *
 * @return The instance of DynamsoftBarcodeReader.
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicenseFromServer:@"" licenseKey:@"C087****" verificationDelegate:self];
 
     - (void)licenseVerificationCallback:(bool)isSuccess error:(NSError * _Nullable)error
     {
         NSNumber* boolNumber = [NSNumber numberWithBool:isSuccess];
         dispatch_async(dispatch_get_main_queue(), ^{
         [self->verificationReceiver performSelector:self->verificationCallback withObject:boolNumber withObject:error];
         });
     }
 * @endcode
 */

- (instancetype _Nonnull)initWithLicenseFromServer:(NSString* _Nullable)licenseSeServer licenseKey:(NSString* _Nonnull)licenseKey verificationDelegate:(id _Nullable)connectionDelegate;


/**
 * Outputs the license content as an encrypted string from the license server to be used for offline license verification.
 *
 * @param [in,out] error Input a pointer to an error object. If an error occurs, this pointer is set to an actual error object containing the error information. You may specify nil for this parameter if you do not want the error information.
 * @return The output string which stores the contents of license.
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     NSError __autoreleasing * _Nullable error;
     [barcodeReader outputLicenseToString:&error];
 * @endcode
 */	
- (NSString *_Nullable)outputLicenseToString:(NSError* _Nullable * _Nullable)error;

/**
 * @}
 * @name Basic Setting Functions
 * @{
 */

/**
 * Gets current settings and save them into a struct.
 *
 * @return A DBRPublicRuntimeSettings storing current runtime settings.
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     NSError __autoreleasing * _Nullable error;
     [barcodeReader getRuntimeSettings:&error];
 * @endcode
 *
 */
- (iPublicRuntimeSettings* _Nullable)getRuntimeSettings:(NSError* _Nullable * _Nullable)error;

/**
 * Update runtime settings with a given struct.
 *
 * @param [in] settings The struct of template settings.
 * @param [in,out] error Input a pointer to an error object. If an error occurs, this pointer is set to an actual error object containing the error information. You may specify nil for this parameter if you do not want the error information.
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     NSError __autoreleasing * _Nullable error;
     iPublicRuntimeSettings *settings;
 
     [barcodeReader updateRuntimeSettings:settings error:&error];
 * @endcode
 */
- (void)updateRuntimeSettings:(iPublicRuntimeSettings* _Nonnull)settings
                        error:(NSError* _Nullable * _Nullable)error;

/**
 * Resets all parameters to default values.
 *
 * @param [in,out] error Input a pointer to an error object. If an error occurs, this pointer is set to an actual error object containing the error information. You may specify nil for this parameter if you do not want the error information.
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     NSError __autoreleasing * _Nullable error;
 
     [barcodeReader resetRuntimeSettings:&error];
 * @endcode
 */
- (void)resetRuntimeSettings:(NSError* _Nullable * _Nullable)error;

/**
 * Sets the optional argument for a specified mode in Modes parameters.
 *
 * @param [in] modeName The mode parameter name to set argument.
 * @param [in] index The array index of mode parameter to indicate a specific mode.
 * @param [in] argumentName The name of the argument to set.
 * @param [in] argumentValue The value of the argument to set.
 * @param [in,out] error Input a pointer to an error object. If an error occurs, this pointer is set to an actual error object containing the error information. You may specify nil for this parameter if you do not want the error information.
 *
 * @par Remarks:
 *		Check @ref ModesArgument for details
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     iPublicRuntimeSettings *settings;
     NSError __autoreleasing * _Nullable error;
     NSMutableArray *mArray = [NSMutableArray arrayWithArray:settings.binarizationModes];
     mArray[0] = [NSNumber numberWithInteger:EnumBinarizationModeLocalBlock];
     settings.binarizationModes = mArray;
 
     [barcodeReader updateRuntimeSettings:settings error:&error];
     [barcodeReader setModeArgument:@"BinarizationModes" index:0 argumentName:@"EnableFillBinaryVacancy" argumentValue:"1" error:&error];
 * @endcode
 */
-(void)setModeArgument:(NSString* _Nonnull)modeName
                     index:(NSInteger)index 
                     argumentName:(NSString* _Nonnull)argumentName
                     argumentValue:(NSString* _Nonnull)argumentValue
                     error:(NSError* _Nullable * _Nullable)error;

/**
 * Gets the optional argument for a specified mode in Modes parameters.
 *
 * @param [in] modeName The mode parameter name to get argument.
 * @param [in] index The array index of mode parameter to indicate a specific mode.
 * @param [in] argumentName The name of the argument to get.
 * @param [in,out] error Input a pointer to an error object. If an error occurs, this pointer is set to an actual error object containing the error information. You may specify nil for this parameter if you do not want the error information.
 * @return the optional argument for a specified mode
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     iPublicRuntimeSettings *settings;
     NSError __autoreleasing * _Nullable error;
     NSString *argumentValue;
     NSMutableArray *mArray = [NSMutableArray arrayWithArray:settings.binarizationModes];
     mArray[0] = [NSNumber numberWithInteger:EnumBinarizationModeLocalBlock];
     settings.binarizationModes = mArray;
 
     [barcodeReader updateRuntimeSettings:settings error:&error];
     [barcodeReader setModeArgument:@"BinarizationModes" index:0 argumentName:@"EnableFillBinaryVacancy" argumentValue:"1" error:&error];
     argumentValue = [barcodeReader getModeArgument:@"BinarizationModes" index:0 argumentName:@"EnableFillBinaryVacancy" error:&error];
 * @endcode
 */
-(NSString* _Nonnull)getModeArgument:(NSString* _Nonnull)modeName
                        index:(NSInteger)index
                        argumentName:(NSString* _Nonnull)argumentName
                        error:(NSError* _Nullable * _Nullable)error;

/**
 * @}
 * @name Decoding Functions
 * @{
 */

/**
 * Decodes barcodes from an image file encoded as a base64 string.
 *
 * @param [in] base64 A base64 encoded string that represents an image.
 * @param [in] templateName The template name.
 * @param [in,out] error Input a pointer to an error object. If an error occurs, this pointer is set to an actual error object containing the error information. You may specify nil for this parameter if you do not want the error information.
 *
 * @return All barcode text results decoded successfully.
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     iTextResult *result;
     NSError __autoreleasing * _Nullable error;
     result = [barcodeReader decodeBase64:@"file in base64 string" withTemplate:@"" error:&error];
 * @endcode
 */
- (NSArray<iTextResult*>* _Nullable)decodeBase64:(NSString* _Nonnull)base64
                                   withTemplate:(NSString* _Nonnull)templateName
                                          error:(NSError* _Nullable * _Nullable)error;

/**
 * Decodes barcodes from an image file in memory.
 *
 * @param [in] image The image file in memory.
 * @param [in] templateName The template name.
 * @param [in,out] error Input a pointer to an error object. If an error occurs, this pointer is set to an actual error object containing the error information. You may specify nil for this parameter if you do not want the error information.
 *
 * @return All barcode text results decoded successfully.
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     iTextResult *result;
     UIImage *image;
     NSError __autoreleasing * _Nullable error;
     result = [barcodeReader decodeImage:image withTemplate:@"" error:&error];
 * @endcode
 */
- (NSArray<iTextResult*>* _Nullable)decodeImage:(UIImage* _Nonnull)image
                                  withTemplate:(NSString* _Nonnull)templateName
                                         error:(NSError* _Nullable * _Nullable)error;

/**
 * Decodes barcodes from the memory buffer containing image pixels in the defined format.
 *
 * @param [in] buffer The array of bytes which contain the image data.
 * @param [in] width The width of the image in pixels.
 * @param [in] height The height of the image in pixels.
 * @param [in] stride The stride (or scan width) of the image.
 * @param [in] format The image pixel format used in the image byte array.
 * @param [in] templateName The template name.
 * @param [in,out] error Input a pointer to an error object. If an error occurs, this pointer is set to an actual error object containing the error information. You may specify nil for this parameter if you do not want the error information.
 *
 * @return All barcode text results decoded successfully.
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     iTextResult *result;
     NSData *bufferBytes;
     NSInteger iWidth = 0;
     NSInteger iHeight = 0;
     NSInteger iStride = 0;
     NSInteger format;
     NSError __autoreleasing * _Nullable error;
     result = [barcodeReader decodeBuffer:bufferBytes withWidth:iWidth height:iHeight stride:iStride format:format templateName:@"" error:&error];
 * @endcode
 */
- (NSArray<iTextResult*>* _Nullable)decodeBuffer:(NSData* _Nonnull)buffer
                                      withWidth:(NSInteger)width
                                         height:(NSInteger)height
                                         stride:(NSInteger)stride
                                         format:(EnumImagePixelFormat)format
                                   templateName:(NSString* _Nonnull)templateName
                                          error:(NSError* _Nullable * _Nullable)error;


 /**
  * Decodes barcodes in a specified local image.
  *
  * @param [in] name The local path of the file.
  * @param [in] templateName The template name.
  * @param [in,out] error Input a pointer to an error object. If an error occurs, this pointer is set to an actual error object containing the error information. You may specify nil for this parameter if you do not want the error information.
  *
  * @return All barcode text results decoded successfully.
  *
  * @par Code Snippet:
  * @code
      DynamsoftBarcodeReader *barcodeReader;
      barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
      iTextResult *result;
      NSError __autoreleasing * _Nullable error;
      result = [barcodeReader decodeFileWithName:@"your file path" templateName:@"" error:&error];
  * @endcode
  */
- (NSArray<iTextResult*>* _Nullable)decodeFileWithName:(NSString* _Nonnull)name
                                         templateName:(NSString* _Nonnull)templateName
                                                error:(NSError* _Nullable * _Nullable)error;

/**
 * Starts a new thread to decode barcodes from the inner frame queue.
 * 
 * @param [in] maxQueueLength The max count of frames waiting for decoding.
 * @param [in] maxResultQueueLength The max count of frames whose results (text result/localization result) will be kept for further reference.
 * @param [in] width The width of the frame image in pixels.
 * @param [in] height The height of the frame image in pixels.
 * @param [in] stride The stride (or scan width) of the frame image.
 * @param [in] format The image pixel format used in the image byte array.
 * @param [in] templateName (Optional) The template name.
 * @param [in,out] error Input a pointer to an error object. If an error occurs, this pointer is set to an actual error object containing the error information. You may specify nil for this parameter if you do not want the error information.
 *
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     NSError __autoreleasing * _Nullable error;
     [barcodeReader startFrameDecoding:2 maxResultQueueLength:10 width:1024 height:720 stride:720 format:EnumImagePixelFormatBinary templateName:@"" error:&error];
 * @endcode
 */
-(void)startFrameDecoding:(NSInteger)maxQueueLength
                     maxResultQueueLength:(NSInteger)maxResultQueueLength
                     width:(NSInteger)width
                     height:(NSInteger)height
                     stride:(NSInteger)stride
                     format:(EnumImagePixelFormat)format
                     templateName:(NSString* _Nonnull)templateName
                     error:(NSError* _Nullable * _Nullable)error;

/**
 * Starts a new thread to decode barcodes from the inner frame queue.
 *
 * @param [in] parameters The frame decoding parameters.
 * @param [in] templateName The template name.
 * @param [in,out] error Input a pointer to an error object. If an error occurs, this pointer is set to an actual error object containing the error information. You may specify nil for this parameter if you do not want the error information.
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     NSError __autoreleasing * _Nullable error;
     iFrameDecodingParameters *parameters = [barcodeReader getFrameDecodingParameters:nil];
     parameters.maxQueueLength = 2;
     parameters.maxResultQueueLength = 10;
     parameters.width = 1024;
     parameters.height = 720;
     parameters.stride = 720;
     parameters.imagePixelFormat = EnumImagePixelFormatBinary;
     [barcodeReader StartFrameDecodingEx:parameters templateName:@"" error:&error];
 * @endcode
 */
-(void)startFrameDecodingEx:(iFrameDecodingParameters* _Nullable) parameters
                    templateName:(NSString* _Nonnull)templateName
                    error:(NSError* _Nullable __autoreleasing* _Nullable)error;


/**
 * Inits frame decoding parameters.
 *
 * @param [in,out] error Input a pointer to an error object. If an error occurs, this pointer is set to an actual error object containing the error information. You may specify nil for this parameter if you do not want the error information.
 * @return Returns frame decoding parameters.
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     iFrameDecodingParameters *parameters = [barcodeReader getFrameDecodingParameters:nil];
 * @endcode
 */
-(iFrameDecodingParameters*_Nullable)getFrameDecodingParameters:(NSError* _Nullable * _Nullable)error;

/**
 * Appends a frame image buffer to the inner frame queue.
 * 
 * @param [in] bufferBytes The array of bytes which contain the image data.
 *				   
 * @return Returns the ID of the appended frame.
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     NSError __autoreleasing * _Nullable error;
     NSInteger *frameId;
     [barcodeReader startFrameDecoding:2 maxResultQueueLength:10 width:1024 height:720 stride:720 format:EnumImagePixelFormatBinary templateName:@"" error:&error];
     frameId = [barcodeReader appendFrame:bufferBytes];
 * @endcode
 */	
-(NSInteger)appendFrame:(NSData* _Nullable) bufferBytes;
 
/**
 * Gets current length of the inner frame queue.
 *				   
 * @return Returns the length of the inner frame queue.
 *
 * @par Code Snippet:
 * @code
    DynamsoftBarcodeReader *barcodeReader;
    barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
    NSError __autoreleasing * _Nullable error;
    NSInteger *length;
    length = [barcodeReader getLengthOfFrameQueue];
 * @endcode
 */	
-(NSInteger)getLengthOfFrameQueue;

/**
 * Stops the frame decoding thread created by StartFrameDecoding.
 * 
 * @param [in,out] error Input a pointer to an error object. If an error occurs, this pointer is set to an actual error object containing the error information. You may specify nil for this parameter if you do not want the error information.
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     NSError __autoreleasing * _Nullable error;
     [barcodeReader startFrameDecoding:2 maxResultQueueLength:10 width:1024 height:720 stride:720 format:EnumImagePixelFormatBinary templateName:@"" error:&error];
     [barcodeReader stopFrameDecoding:&error];
 * @endcode
 */
-(void)stopFrameDecoding:(NSError* _Nullable * _Nullable)error;

/**
 * @}
 * @name Advanced Setting Functions
 * @{
 */

/**
 * Gets the parameter templates name array.
 *
 * @return The template name array.
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     NSError __autoreleasing * _Nullable error;
 
     [barcodeReader allParameterTemplateNames:&error];
 * @endcode
 */
- (NSArray<NSString*>* _Nullable)allParameterTemplateNames: (NSError *__autoreleasing  _Nullable * _Nullable)error;

/**
 * Initializes runtime settings with the settings in the given JSON file.
 *
 * @param [in] fileName The path of the settings file.
 * @param [in] conflictMode The parameter setting mode which decides whether to inherit parameters from
 * 			  previous template setting or to overwrite previous settings and replace with the new template.
 * @param [in,out] error Input a pointer to an error object. If an error occurs, this pointer is set to an actual error object containing the error information. You may specify nil for this parameter if you do not want the error information _Nullable .
 * 
 * @sa DynamsoftBarcodeReader DBRPublicRuntimeSettings
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     NSError __autoreleasing * _Nullable error;
     [barcodeReader initRuntimeSettingsWithFile:@"your template file path" conflictMode:EnumConflictModeOverwrite error:&error];
 * @endcode
 */
- (void)initRuntimeSettingsWithFile:(NSString* _Nonnull)fileName
                       conflictMode:(EnumConflictMode)conflictMode
	                          error:(NSError* _Nullable * _Nullable)error;

/**
 * Initialize runtime settings with the _Nullable settings in the given JSON string.
 *
 *_Nullable @param [in] content A JSON string that represents the content of the settings.
 * @param [in] conflictMode The parameter setting mode which decides whether to inherit parameters from
 * 			  previous template setting or to overwrite previous settings and replace by new template.
 * @param [in,out] error Input a pointer to an error object. If an error occurs, this pointer is set to an actual error object containing the error information. You may specify nil for this parameter if you do not want the error information.
 *
 * @sa DynamsoftBarcodeReader DBRPublicRuntimeSettings
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     NSError __autoreleasing * _Nullable error;
     [barcodeReader initRuntimeSettingsWithString:@"{\"Version\":\"3.0\", \"ImageParameter\":{\"Name\":\"IP1\", \"BarcodeFormatIds\":[\"BF_QR_CODE\"], \"ExpectedBarcodesCount\":10}}" conflictMode:EnumConflictModeOverwrite error:&error];
 * @endcode
 */
- (void)initRuntimeSettingsWithString:(NSString* _Nonnull)content
						  conflictMode:(EnumConflictMode)conflictMode
								 error:(NSError* _Nullable * _Nullable)error;

/**
 * Appends a new template file to the current runtime settings.
 *
 * @param [in] fileName The path of the settings file.
 * @param [in] conflictMode The parameter setting mode which decides whether to inherit parameters from
 * 			  previous template setting or to overwrite previous settings and replace by new template.
 * @param [in,out] error Input a pointer to an error object. If an error occurs, this pointer is set to an actual error object containing the error information. You may specify nil for this parameter if you do not want the error information.
 *
 * @sa DynamsoftBarcodeReader DBRPublicRuntimeSettings
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     NSError __autoreleasing * _Nullable error;
     [barcodeReader appendTplFileToRuntimeSettings:@"your template file path" conflictMode:EnumConflictModeIgnore error:&error];
 * @endcode
 */
- (void)appendTplFileToRuntimeSettings:(NSString * _Nonnull)fileName
					      conflictMode:(EnumConflictMode)conflictMode
								 error:(NSError * _Nullable *_Nullable)error;

/**
 * Appends a new template string to the current runtime settings.
 *
 * @param [in] content A JSON string that represents the content of the settings.
 * @param [in] conflictMode The parameter setting mode which decides whether to inherit parameters from
 * 			  previous template setting or to overwrite previous settings and replace by new template.
 * @param [in,out] error Input a pointer to an error object. If an error occurs, this pointer is set to an actual error object containing the error information. You may specify nil for this parameter if you do not want the error information.
 *
 * @sa DynamsoftBarcodeReader DBRPublicRuntimeSettings
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     NSError __autoreleasing * _Nullable error;
     [barcodeReader initRuntimeSettingsWithString:@"{\"Version\":\"3.0\", \"ImageParameter\":{\"Name\":\"IP1\", \"BarcodeFormatIds\":[\"BF_QR_CODE\"], \"ExpectedBarcodesCount\":10}}" conflictMode:EnumConflictModeOverwrite error:&error];
     [barcodeReader appendTplStringToRuntimeSettings:@"{\"Version\":\"3.0\", \"ImageParameter\":{\"Name\":\"IP1\", \"BarcodeFormatIds\":[\"BF_OneD\"], \"ExpectedBarcodesCount\":20}}" conflictMode:EnumConflictModeIgnore error:&error];
 * @endcode
 */
- (void)appendTplStringToRuntimeSettings:(NSString * _Nonnull)content
							conflictMode:(EnumConflictMode)conflictMode
								   error:(NSError *_Nullable *_Nullable)error;

/**
 * Outputs runtime settings to a string.
 *
 * @param [in] settingsName A unique name for declaring current runtime settings.
 * @param [in,out] error Input a pointer to an error object. If an error occurs, this pointer is set to an actual error object containing the error information. You may specify nil for this parameter if you do not want the error information.
 *
 * @return The output string which stores the content of current settings. 
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     NSString *settingsName;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     NSError __autoreleasing * _Nullable error;
     settingsName = [barcodeReader outputSettingsToString:@"currentRuntimeSettings" error:&error];
 * @endcode
 *
 */
- (NSString *_Nullable)outputSettingsToString:(NSString*_Nonnull)settingsName 
                                        error:(NSError* _Nullable * _Nullable)error;

/**
 * Outputs runtime settings and save it into a settings file (JSON file).
 *
 * @param [in] filePath The output file path to store the current settings.
 * @param [in] settingsName A unique name for declaring the current runtime settings.
 * 
 * @param [in,out] error Input a pointer to an error object. If an error occurs, this pointer is set to an actual error object containing the error information. You may specify nil for this parameter if you do not want the error information.
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     NSString *settingsName;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     NSError __autoreleasing * _Nullable error;
     settingsName = [barcodeReader outputSettingsToFile:@"your saving file path" settingsName:@"currentRuntimeSettings" error:&error];
 * @endcode
 */
- (void)outputSettingsToFile:(NSString *_Nullable)filePath 
				settingsName:(NSString*_Nonnull)settingsName 
					error:(NSError*_Nullable *_Nullable)error;

/**
 * @}
 * @name Callback Functions
 * @{
 */


/**
 * Sets callback function to process errors generated during frame decoding.
 * 
 * @param [in] errorDelegate Callback function.
 * @param [in] userData Customized arguments passed to your function.				 
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     [barcodeReader setDBRErrorDelegate:self userData:nil];
 * @endcode
 */
-(void)setDBRErrorDelegate:(id _Nullable)errorDelegate userData:(NSObject* _Nullable)userData;

/**
 * Sets callback function to process text results generated during frame decoding.
 * 
 * @param [in] textResultDelegate Callback function.
 * @param [in] userData Customized arguments passed to your function.
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     [barcodeReader setDBRTextResultDelegate:self userData:nil];
 * @endcode
 */
-(void)setDBRTextResultDelegate:(id _Nullable)textResultDelegate userData:(NSObject* _Nullable)userData;

/**
 * Sets callback function to process intermediate results generated during frame decoding.
 * 
 * @param [in] intermediateResultDelegate Callback function.
 * @param [in] userData Customized arguments passed to your function.
 *
 * @par Code Snippet:
 * @code
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
     [barcodeReader setDBRIntermediateResultDelegate:self userData:nil];
 * @endcode
 */
-(void)setDBRIntermediateResultDelegate:(id _Nullable)intermediateResultDelegate userData:(NSObject* _Nullable)userData;

/**
 * @}
 * @name Results Functions
 * @{
 */

/**
 * Returns intermediate results containing the original image, the colour clustered image, the binarized image, contours, lines, text blocks, etc.
 * 
 * @return Returns  intermediate result array.
 *
 * @par Code Snippet:
 * @code
     iPublicRuntimeSettings *settings;
     NSError __autoreleasing * _Nullable error;
     NSArray<iTextResult *> *result;
     NSArray<iIntermediateResult *> *irResult;
     DynamsoftBarcodeReader *barcodeReader;
     barcodeReader = [[DynamsoftBarcodeReader alloc] initWithLicense:@"t0260NwAAAHV***************"];
 
     [m_barcodeReader getRuntimeSettings:&error];
     settings.intermediateResultTypes = EnumIntermediateResultTypeColourConvertedGrayScaleImage|EnumIntermediateResultTypeOriginalImage|EnumIntermediateResultTypeColourClusteredImage;
     [m_barcodeReader updateRuntimeSettings:settings error:&error];
     result = [m_barcodeReader decodeFileWithName:@"your file path" templateName:@"" error:&error];
     irResult = [m_barcodeReader getIntermediateResult:&error];
 * @endcode
 */
-(NSArray<iIntermediateResult*>* _Nullable)getIntermediateResult:(NSError* _Nullable * _Nullable)error;

/**
* @}
*/
@end

/**
 * @}
 * @}
 */
